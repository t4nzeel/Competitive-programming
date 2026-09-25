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
    	if(n%2==0)cout<<(k-1)%n+1<<endl;
    	else{
    		ll shift=(k-1)/(n/2);
    		cout<<(k+shift-1)%n+1<<endl;
    	}
    }
}