#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    
	    long i=1;
	    int c=0;
	    
	    while(n>=i){
	        ++c;
	        n=n-i;
	        i++;
	    }
	    
	    cout << c << endl;
	    
	}
	return 0;
}
