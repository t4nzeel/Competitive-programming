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
    	vector<ll>v(m),gap;
    	for(ll&x:v)cin>>x;
    	sort(v.begin(),v.end());
    	for(ll i=0;i<m-1;i++){
    		gap.push_back(v[i+1]-v[i]-1);
    	}
    	gap.push_back(n-v[m-1]+v[0]-1);
    	sort(gap.begin(),gap.end(),greater<ll>());
    	ll d=0,s=0;
    	for(ll g:gap){
    		ll r=g-2*d;
    		if(r<=0)continue;
    		if(r==1){
    			d++;
    			s++;
    		}
    		else{
    			s+=r-1;
    			d+=2;
    		}
    	}
    	cout<<n-s<<endl;
    }
}