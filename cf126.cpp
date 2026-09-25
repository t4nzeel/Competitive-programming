#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		vector<int>v(n);
		for(int &x:v)cin>>x;
		sort(v.begin(),v.end());
		int ans=0;
		int l=0,r=n-1;
		while(l<=r){
			int mx=v[r];
			int nd=d/mx+1;
			if(r-l+1<nd)break;
			ans++;
			l+=nd-1;
			r--;
		}
		cout<<ans<<endl;
	}
}