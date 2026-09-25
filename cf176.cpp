#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(vector<ll>&v,ll x){
	ll i=0,j=v.size()-1;
	while(i<j){
		if(v[i]==v[j]){
			i++;
			j--;
		}
		else if(v[i]==x)i++;
		else if(v[j]==x)j--;
		else return false;
	}
	return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n;
    	cin>>n;
    	vector<ll>v(n);
    	for(ll&x:v)cin>>x;
    	ll l=0,r=n-1;
    	while(l<r && v[l]==v[r]){
    		l++;
    		r--;
    	}
    	if(l>=r)cout<<"Yes"<<endl;
    	else{
    		if(check(v,v[l]) || check(v,v[r]))cout<<"Yes"<<endl;
    		else cout<<"No"<<endl;
    	}
    }
}