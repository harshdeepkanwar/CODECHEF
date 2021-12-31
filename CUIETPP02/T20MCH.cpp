#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,o,r;
	cin>>t>>o>>r;
	
	int s = (20-o)*6*6;
	
	if(r+s > t){
	    cout << "YES" << endl;
	}else{
	    cout << "NO" << endl;
	}
	
	return 0;
}
