#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    	ll n;
    	cin>>n;
    	vector<ll>v(n),exitPos(n+1);
    	for(ll &x:v)cin>>x;
    	for(ll i=0;i<n;i++){
    		ll x;
    		cin>>x;
    		exitPos[x]=i;
    	}
    	ll maxExit=-1,cnt=0;
    	for(ll i=0;i<n;i++){
    		ll car=v[i];
    		if(exitPos[car]<maxExit)cnt++;
    		maxExit=max(maxExit,exitPos[car]);
    	}
    	cout<<cnt<<endl;
}