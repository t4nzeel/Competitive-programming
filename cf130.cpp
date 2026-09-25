#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<int>v(n+1,0);
		for(int i=1;i<=n;i++)v[i]=v[i-1]+int(s[i-1]=='W');
		int ans=INT_MAX;
		for(int i=k;i<=n;i++)
			ans=min(ans,v[i]-v[i-k]);
		cout<<ans<<endl;
	}
}