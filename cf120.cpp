#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v(n);
		for(int &x:v)cin>>x;
		vector<pair<int,int>>ans;
		for(int i=0;i<n;i++){
			int y=v[i]%k;
			if(y==0)y=k;
			ans.push_back({-y,i+1});
		}
		sort(ans.begin(),ans.end());
		for(int i=0;i<n;i++){
			cout<<ans[i].second<<" ";
		}
		cout<<endl;
	}
}