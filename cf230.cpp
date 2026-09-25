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
    	vector<ll>v(n),ans;
    	for(ll &x:v)cin>>x;
    	ans.push_back(v[0]);
    	for(ll i=1;i<n-1;i++){
    		if(v[i]>v[i-1] && v[i]>v[i+1])ans.push_back(v[i]);
    		else if(v[i]<v[i-1] && v[i]<v[i+1])ans.push_back(v[i]);
    	}
    	ans.push_back(v[n-1]);
    	cout<<ans.size()<<endl;
    	for(ll x:ans)cout<<x<<" ";
    	cout<<endl;
    }
}