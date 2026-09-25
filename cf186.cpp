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
    	ll mn=1,mx=n;
    	ll l=0,r=n-1;
    	while(l<r){
    		if(v[l]==mn){
    			l++;
    			mn++;
    		}
    		else if(v[l]==mx){
    			l++;
    			mx--;
    		}
    		if(v[r]==mn){
    			r--;
    			mn++;
    		}
    		else if(v[r]==mx){
    			r--;
    			mx--;
    		}
    		if((v[l]!=mx && v[l]!=mn) && (v[r]!=mx && v[r]!=mn))break;
    	}
    	if(l>=r)cout<<-1<<endl;
    	else cout<<l+1<<" "<<r+1<<endl;
    }
}