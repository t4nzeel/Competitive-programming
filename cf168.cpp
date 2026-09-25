#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD=1000000007;
const ll INV=166666668;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n;
    	cin>>n;
    	ll ans=n%MOD;
    	ans=ans*((n+1)%MOD)%MOD;
    	ans=ans*((4*n-1)%MOD)%MOD;
    	ans=ans*INV%MOD;
    	ans=ans*2022%MOD;
    	cout<<ans<<endl;
    }
}