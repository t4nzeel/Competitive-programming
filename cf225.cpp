#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,W;
    	cin>>n>>W;
    	multiset<ll>st;
    	for(ll i=0;i<n;i++){
    		ll x;
    		cin>>x;
    		st.insert(x);
    	}
    	ll h=0;
    	while(!st.empty()){
    		ll r=W;
    		h++;
    		while(!st.empty()){
    			auto it=st.upper_bound(r);
    			if(it==st.begin())break;
    			--it;
    			r-=*it;
    			st.erase(it);
    		}
    	}
    	cout<<h<<endl;
    }
}