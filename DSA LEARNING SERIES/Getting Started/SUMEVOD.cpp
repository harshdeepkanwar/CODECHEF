#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long n;
	cin>>n;
	long odd=0,even=0;
	
	for(int i=1;i<=2*n;i=i+2){
	    odd = odd + i;
	}
	
	for(int i=2;i<=2*n;i=i+2){
	    even = even + i;
	}
	
	cout << odd << " " << even;
	
	return 0;
}
