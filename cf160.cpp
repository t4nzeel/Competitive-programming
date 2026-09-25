#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>a(n),b(n);
		for(ll &x:a)cin>>x;
		for(ll &x:b)cin>>x;
		ll l=0,r=n-1;
		while(a[l]==b[l])l++;
		while(a[r]==b[r])r--;
		while(l>0  && a[l-1]<=b[l])l--;
		while(r<n-1 && a[r+1]>=b[r])r++;
		cout<<l+1<<" "<<r+1<<endl;
	}
}