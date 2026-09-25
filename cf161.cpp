#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll n=s.size();
		if(n==1){
			cout<<s[0]-'0'<<endl;
			continue;
		}
		if(count(s.begin(),s.end(),'1')==n){
			cout<<n*n<<endl;
			continue;
		}
		ll l=0,r=n-1;
		if(s[l]=='1' && s[r]=='1'){
			while(l<n && s[l]=='1')l++;
			while(r>=0 && s[r]=='1')r--;
		}
		ll mx=l+n-r-1;
		ll len=0;
		while(l<=r){
			if(s[l]=='1'){
				len++;
				mx=max(mx,len);
			}
			else len=0;
			l++;
		}
		if(mx==0){
			cout<<0<<endl;
			continue;
		}
		ll a=(mx+1)/2;
		ll b=(mx+2)/2;
		cout<<a*b<<endl;
	}
}