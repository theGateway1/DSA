#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int m,n,k;
	    cin >>m;
	    cin >> n;
	    cin >>k;
	    
	    if(m > n*k) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
}