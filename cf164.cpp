#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	ll n,c;
    	cin>>n>>c;
    	vector<ll>v(n);
    	for(ll i=0;i<n;i++){
    		cin>>v[i];
    		v[i]+=i+1;
    	}
    	sort(v.begin(),v.end());
    	ll cnt=0;
    	for(ll i=0;i<n;i++){
    		if(v[i]<=c){
    			cnt++;
    			c-=v[i];
    		}
            else break;
    	}
    	cout<<cnt<<endl;
    }
}