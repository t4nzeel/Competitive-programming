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
    	vector<ll>freq(31,0);
    	for(int i=0;i<n;i++){
    		ll x;
    		cin>>x;
    		ll nb=log2(x)+1;
    		freq[nb]++;
    	}
    	ll ans=0;
    	for(ll i=1;i<=30;i++){
    		ans+=freq[i]*(freq[i]-1)/2;
    	}
    	cout<<ans<<endl;
    }
}