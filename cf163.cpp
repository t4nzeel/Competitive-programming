#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    	ll n,k;
    	cin>>n>>k;
    	vector<vector<ll>>v(n,vector<ll>(n));
    	for(ll i=0;i<n;i++){
    		for(ll j=0;j<n;j++){
    			cin>>v[i][j];
    		}
    	}
    	ll cnt=0;
    	for(ll i=0;i<n/2;i++){
    		for(ll j=0;j<n;j++){
    			if(v[i][j]!=v[n-1-i][n-1-j])cnt++;
    		}
    	}
    	if(cnt>k){
    		cout<<"No"<<endl;
    		continue;
    	}
    	if(n&1){
    		for(ll j=0;j<n/2;j++){
    			if(v[n/2][j]!=v[n/2][n-1-j])cnt++;
    		}
    	}
    	if(cnt>k)cout<<"No"<<endl;
		else if(n%2!=0)cout<<"Yes"<<endl;
		else if((k-cnt)%2==0)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
    }
}