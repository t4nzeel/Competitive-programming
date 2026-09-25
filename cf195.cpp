#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,x;
    	cin>>n>>x;
    	vector<ll>v(n);
    	for(ll&y:v)cin>>y;
    	sort(v.begin(),v.end());
    	vector<ll>pref(n);
    	pref[0]=v[0];
    	for(ll i=1;i<n;i++){
    		pref[i]=pref[i-1]+v[i];
    	}
    	ll ans=0,prev=-1;
    	for(ll i=n-1;i>=0;i--){
    		if(pref[i]>x)continue;
    		ll last=(x-pref[i])/(i+1);
    		ans+=(last-prev)*(i+1);
    		prev=last;
    	}
    	cout<<ans<<endl;
    }
}