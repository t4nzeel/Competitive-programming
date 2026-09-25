#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>a(n),b(n);
		for(int &x:a)cin>>x;
		for(int &x:b)cin>>x;
		int s=0,mx=0,ans=0;
		for(int i=0;i<min(n,k);i++){
			s+=a[i];
			mx=max(mx,b[i]);
			int r=k-i-1;
			ans=max(ans,s+r*mx);
		}
		cout<<ans<<endl;
	}
}