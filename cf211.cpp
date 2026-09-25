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
    	vector<ll>a(n+1);
    	vector<ll>p(n+1);
    	for(ll i=1;i<=n;i++)cin>>a[i];
    	p[1] = -1;
        for (ll i = 2; i <= n; i++) {
            if (a[i] != a[i - 1]) {
                p[i] = i - 1;
            }
            else {
                p[i] = p[i - 1];
            }
        }
    	ll q;
    	cin>>q;
    	while(q--){
    		ll l,r;
    		cin>>l>>r;
    		if(p[r]>=l)cout<<p[r]<<" "<<r<<endl;
    		else cout<<-1<<" "<<-1<<endl;
    	}
    }
}