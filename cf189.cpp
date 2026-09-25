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
    	string s;
    	cin>>s;
    	string s1=" "+s;
    	ll ans=0;
    	vector<ll>appeared(n+1,0);
    	for(ll i=1;i<=n;i++){
    		for(ll j=i;j<=n;j+=i){
    			if(s1[j]=='1')break;
    			if(appeared[j]==0){
    				appeared[j]=1;
    				ans+=i;
    			}
    		}
    	}
    	cout<<ans<<endl;
    }
}