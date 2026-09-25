#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,ans;
    cin>>n;
    if(n%2==0){
    	ll k=n/2;
    	ans=(k+1)*(k+1);
    }
    else{
    	ll k=n/2;
    	ans=2*(k+1)*(k+2);
    }
    cout<<ans<<endl;
}