#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,c;
	    cin>>d>>c;
	    int a1,a2,a3;
	    cin>>a1>>a2>>a3;
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    int day1 = a1+a2+a3;
	    int day2 = b1+b2+b3;
	    int tot1 = day1 + day2 + d + d;
	    int tot2 = day1 + day2 + c;
	    if(day1<150){
	        tot2+=d;
	    }
	    if(day2<150){
	        tot2+=d;
	    }
	    if(tot2 < tot1){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
