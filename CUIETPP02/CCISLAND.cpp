#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,xr,yr,d;
	    cin>>x>>y>>xr>>yr>>d;
	    float s;
	    float sx = x/xr;
	    float sy = y/yr;
	    
	    if(sx < sy){
	        s = sx;
	    }else{
	        s = sy;
	    }
	    
	    if(s >= d){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	    
	}
	    
	return 0;
}
