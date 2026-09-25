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
    	ll m=n*(n-1)/2;
    	vector<ll>b(m);
    	for(ll &x:b)cin>>x;
    	sort(b.begin(),b.end());
    	vector<ll>a;
    	ll idx=0;
    	for(ll r=n-1;r>=1;r--){
    		a.push_back(b[idx]);
    		idx+=r;
    	}
    	a.push_back(1000000000LL);
    	for(ll x:a)cout<<x<<" ";
    	cout<<endl;
    }
}