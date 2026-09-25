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
    	ll ans=0;
    	map<int,int>freq;
    	for(ll i=0;i<n;i++){
    		ll x;
    		cin>>x;
    		ll key=x-i;
    		ans+=freq[key];
    		freq[key]++;
    	}
    	cout<<ans<<endl;
    }
}