#include <iostream>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

ll lcm(ll a, ll b){
    return (a * b)/gcd(a,b);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll x,y;
	    cin>>x;
	    cin>>y;
	    cout << gcd(x,y) << " " << lcm(x,y) << endl;
	}
	
	return 0;
}
