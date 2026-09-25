#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n;
        cin>>n;
    	vector<ll>parent(n+1);
    	for(ll i=2;i<=n;i++)cin>>parent[i];
    	string s;
        cin>>s;
        vector<ll>balance(n+1);
        for(ll i=1;i<=n;i++){
        	balance[i]=(s[i-1]=='W' ? 1:-1);
        }
        ll ans=0;
        for(ll i=n;i>=2;i--){
        	if(balance[i]==0)ans++;
        	balance[parent[i]]+=balance[i];
        }
        if(balance[1]==0)ans++;
        cout<<ans<<endl;
    }
}