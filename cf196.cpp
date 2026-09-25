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
    	vector<ll>v(n+1);
    	for(ll i=1;i<=n;i++)cin>>v[i];
    	if(is_sorted(v.begin()+1,v.end())){
    		cout<<0<<endl;
    		continue;
    	}
    	if(v[n-1]>v[n] || v[n]<0){
    		cout<<-1<<endl;
    		continue;
    	}
    	vector<array<ll,3>>ans;
    	for(ll i=n-2;i>=1;i--){
    		v[i]=v[n-1]-v[n];
    		ans.push_back({i,n-1,n});
    	}
    	cout<<ans.size()<<endl;
    	for(auto &op:ans){
    		cout<<op[0]<<" "<<op[1]<<" "<<op[2]<<endl;
    	}
    }
}