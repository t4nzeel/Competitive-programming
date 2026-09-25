#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,k;
    	cin>>n>>k;
    	if(n<=k)cout<<1<<endl;
    	else{
    		ll b=1;
    		for(ll i=1;i*i<=n;i++){
    			if(n%i==0){
    				if(i<=k)b=max(b,i);
    				ll other=n/i;
    				if(other<=k)b=max(b,other);
    			}
    		}
    		cout<<n/b<<endl;
    	}
    }
}