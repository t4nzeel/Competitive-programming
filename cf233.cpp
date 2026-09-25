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
    	vector<ll>v(n);
    	for(ll &x:v)cin>>x;
    	ll sum=0;
    	bool ok=true;
    	for(ll i=0;i<n-1;i++){
    		sum+=v[i];
    		if(sum<=0)ok=false;
    	}
    	sum=0;
    	for(ll i=n-1;i>=1;i--){
    		sum+=v[i];
    		if(sum<=0)ok=false;
    	}
    	if(ok)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    }
}