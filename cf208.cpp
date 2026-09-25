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
    	ll d=-1;
    	for(ll i=1;i<n;i++){
    		if(v[i]!=v[0]){
    			d=i;
    			break;
    		}
    	}
    	if(d==-1)cout<<"No"<<endl;
    	else{
    		cout<<"Yes"<<endl;
    		for(ll i=1;i<n;i++){
    			if(v[i]!=v[0])cout<<1<<" "<<i+1<<endl;
    			else cout<<d+1<<" "<<i+1<<endl;
    		}
    	}
    }
}