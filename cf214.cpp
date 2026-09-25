#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD=998244353;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	string s;
    	cin>>s;
    	ll ways=1,operatn=0;
    	ll n=s.size();
    	for(ll i=0;i<n;){
    		ll j=i;
    		while(j<n && s[j]==s[i])j++;
    		ll len=j-i;
    		operatn+=len-1;
    		ways=ways*len%MOD;
    		i=j;
    	}
    	for(ll i=1;i<=operatn;i++){
    		ways=ways*i%MOD;
    	}
    	cout<<operatn<<" "<<ways<<endl;
    }
}