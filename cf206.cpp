#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,m;
    	cin>>n>>m;
    	vector<ll>cnt(m,0);
    	for(ll i=0;i<n;i++){
    		ll x;
    		cin>>x;
    		cnt[x%m]++;
    	}
    	ll ans=0;
    	if(cnt[0]>0)ans++;
    	for(ll r=1;r<=(m-1)/2;r++){
    		ll other=m-r;
    		if(cnt[r]==0 && cnt[other]==0)continue;
    		if(cnt[r]==cnt[other])ans++;
    		else if(cnt[r]==0 || cnt[other]==0)ans+=max(cnt[r],cnt[other]);
    		else  ans+=max(1LL,abs(cnt[r]-cnt[other]));
    	}
    	if(m%2==0 && cnt[m/2]>0)ans++;
    	cout<<ans<<endl;
    }
}