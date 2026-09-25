#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,l,r;
    	cin>>n>>l>>r;
    	vector<ll>v;
    	bool ok=true;
    	for(ll i=1;i<=n;i++){
    		ll c=(l+i-1)/i;
    		ll x=c*i;
    		if(x>r){
    			ok=false;
    			break;
    		}
    		v.push_back(x);
    	}
    	if(!ok)cout<<"No"<<endl;
    	else{
    		cout<<"Yes"<<endl;
    		for(ll x:v)cout<<x<<" ";
    		cout<<endl;
    	}
    }
}