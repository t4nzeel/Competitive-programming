#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    map<ll,ll>freq;
    for(ll i=0;i<n;i++){
    	cin>>v[i];
    	sum+=v[i];
    	freq[v[i]]++;
    }
    vector<ll>ans;
    for(ll i=0;i<n;i++){
    	ll rS=sum-v[i];
    	if(rS%2!=0)continue;
    	ll x=rS/2;
    	freq[v[i]]--;
    	if(freq[x]>0)ans.push_back(i+1);
    	freq[v[i]]++;
    }
    cout<<ans.size()<<endl;
    for(ll x:ans)cout<<x<<" ";
    cout<<endl;
}