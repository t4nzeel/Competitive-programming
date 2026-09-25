#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		char c;
		cin>>n>>c;
		string s;
		cin>>s;
		if(c=='g'){
			cout<<0<<endl;
			continue;
		}
		string s1=s+s;
		ll lg=-1;
		ll len=0;
		for(ll i=2*n-1;i>=0;i--){
			if(s1[i]=='g')lg=i;
			if(i<n && s1[i]==c)len=max(len,lg-i);
		}
		cout<<len<<endl;
	}
}