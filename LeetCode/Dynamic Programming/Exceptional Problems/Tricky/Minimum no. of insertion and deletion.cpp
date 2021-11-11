int minOperations(string a, string b) 
	{ 
	    // Your code goes here
	    int len = lcs(a, b);
	    int x = a.size(), y = b.size();
	    int numOfDeletion = x - len;
	    int numOfInsertion = y - len;
	    return numOfDeletion + numOfInsertion;
	} 
    
int lcs(string a, string b){
	    int x = a.size(), y = b.size();
	    int t[x+1][y+1];
	    
	    for(int i=0; i<x+1; i++){
	        for(int j=0; j<y+1; j++){
	            if(i==0 || j==0) t[i][j] = 0;
	            else{
	                if(a[i-1] == b[j-1]) t[i][j] = 1 + t[i-1][j-1];
	                else t[i][j] = max(t[i-1][j], t[i][j-1]);
	            }
	        }
	    }
	    return t[x][y];
	}
	