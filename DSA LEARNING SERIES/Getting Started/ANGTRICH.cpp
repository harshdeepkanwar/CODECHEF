#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	
	if(x+y+z==180){
	    if(x>0 && y>0 && z>0){
	        if(x+y<180 && y+z<180 && x+z<180){
	            cout << "YES" ;
	        }else{
	            cout << "NO";
	        }
	    }else{
	        cout << "NO";
	    }
	}else{
	    cout << "NO";
	}
	
	
	return 0;
}
