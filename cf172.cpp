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
    	for(ll&x:v)cin>>x;
    	ll l=0,r=n-1,ans=0;
  		ll sl=v[0],sr=v[n-1];
  		while(l<r){
  			if(sl==sr)ans=max(ans,l+1+n-r);
  			if(sl<=sr){
  				l++;
  				sl+=v[l];
  			}
  			else{
  				r--;
  				sr+=v[r];
  			}
  		}
  		cout<<ans<<endl;
    }
}