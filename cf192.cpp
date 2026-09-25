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
    	vector<string>v(n);
    	for(ll i=0;i<n;i++)cin>>v[i];
    	ll ans=0;
    	for(ll i=0;i<n/2;i++){
    		for(ll j=0;j<(n+1)/2;j++){
    			ll ones=0;
    			ones+=v[i][j]-'0';
    			ones+=v[j][n-1-i]-'0';
    			ones+=v[n-1-i][n-1-j]-'0';
    			ones+=v[n-1-j][i]-'0';
    			ans+=min(ones,4-ones);
    		}
    	}
    	cout<<ans<<endl;
    }
}