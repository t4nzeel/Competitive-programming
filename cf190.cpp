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
    	vector<ll>a(n),b(n),d(n);
    	for(ll&x:a)cin>>x;
    	for(ll i=0;i<n;i++){
    		cin>>b[i];
    		d[i]=b[i]-a[i];
    	}
    	sort(d.begin(),d.end());
    	ll i=0,j=n-1;
    	ll ans=0;
    	while(i<j){
    		if(d[i]+d[j]>=0){
    			ans++;
    			i++;
    			j--;
    		}
    		else i++;
    	}
    	cout<<ans<<endl;
    }
}