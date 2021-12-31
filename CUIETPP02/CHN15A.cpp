#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,c;
	    c=0;
	    cin>>n>>k;
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        arr[i]+=k;
	        if(arr[i]%7==0){
	            c++;
	        }
	    }
	    cout << c << endl;
	}
	return 0;
}
