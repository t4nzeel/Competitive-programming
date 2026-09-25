#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n),vis(n+1,1);
    ll s=0;
    for(ll &x:v){
    	cin>>x;
    	s+=x;
    }
    ll last=0,times=1;
    while(q--){
    	ll t;
    	cin>>t;
    	if(t==1){
    		ll a1,a2;
    		cin>>a1>>a2;
    		a1--;
    		if(vis[a1]==times)s-=v[a1];
    		else s-=last;
    		v[a1]=a2;
    		vis[a1]=times;
    		s+=a2;
    		cout<<s<<endl;
    	}
    	else{
    		ll a3;
    		cin>>a3;
    		last=a3;
    		times++;
    		s=n*a3;
    		cout<<s<<endl;
    	}
    }
}