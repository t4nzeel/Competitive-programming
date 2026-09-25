#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll w,h;
		cin>>w>>h;
		ll k1;
		cin>>k1;
		ll mx1=LLONG_MIN,mn1=LLONG_MAX;
		while(k1--){
			ll x;
			cin>>x;
			mx1=max(mx1,x);
			mn1=min(mn1,x);
		}
		ll k2;
		cin>>k2;
		ll mx2=LLONG_MIN,mn2=LLONG_MAX;
		while(k2--){
			ll x;
			cin>>x;
			mx2=max(mx2,x);
			mn2=min(mn2,x);
		}
		ll k3;
		cin>>k3;
		ll mx3=LLONG_MIN,mn3=LLONG_MAX;
		while(k3--){
			ll x;
			cin>>x;
			mx3=max(mx3,x);
			mn3=min(mn3,x);
		}
		ll k4;
		cin>>k4;
		ll mx4=LLONG_MIN,mn4=LLONG_MAX;
		while(k4--){
			ll x;
			cin>>x;
			mx4=max(mx4,x);
			mn4=min(mn4,x);
		}
		ll b1=mx1-mn1;
		ll a1=b1*h;
		ll b2=mx2-mn2;
		ll a2=b2*h;
		ll MX1=max(a1,a2);
		ll b3=mx3-mn3;
		ll a3=b3*w;
		ll b4=mx4-mn4;
		ll a4=b4*w;
		ll MX2=max(a3,a4);
		cout<<max(MX1,MX2)<<endl;
	}
}