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
    	set<ll>s;
    	s.insert(0);
    	ll sum=0;
    	bool ok=false;
    	for(ll i=0;i<n;i++){
    		ll x;
    		cin>>x;
    		if(i%2==0)sum+=x;
    		else sum-=x;
    		if(s.find(sum)!=s.end())ok=true;
    		s.insert(sum);
    	}
    	if(ok)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    }
}