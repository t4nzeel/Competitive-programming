#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	ll n,s;
    	cin>>n>>s;
    	vector<ll>v(n);
    	ll sm=0;
    	for(ll&x:v){
    		cin>>x;
    		sm+=x;
    	}
    	if(sm<s){
    		cout<<-1<<endl;
    		continue;
    	}
    	if(sm==s){
    		cout<<0<<endl;
    		continue;
    	}
    	ll l=0,mx=-1,t=0;
    	for(ll r=0;r<n;r++){
    		t+=v[r];
    		while(t>s){
    			t-=v[l];
    			l++;
    		}
    		if(t==s)mx=max(mx,r-l+1);
    	}
    	cout<<n-mx<<endl;
    }
}