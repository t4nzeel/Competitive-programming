#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll lcm(ll x,ll y){
	return (x/__gcd(x,y))*y;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,x,y;
    	cin>>n>>x>>y;
    	ll L=lcm(x,y);
    	ll X=n/x-n/L;
    	ll Y=n/y-n/L;
    	ll p1=X*(2*n-X+1)/2;
    	ll p2=Y*(Y+1)/2;
    	cout<<p1-p2<<endl;
    }
}