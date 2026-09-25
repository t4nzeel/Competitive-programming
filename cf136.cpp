#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int n=a.size();
		int m=b.size();
		vector<vector<int>>dp(n+1,vector<int>(m+1,0));
		int mx=0;
		/*for(int i=0;i<a.size();i++){
			for(int j=i;j<a.size();j++){
				string s1=a.substr(i,j-i+1);
				if(b.find(s1)!=string::npos){
					mx=max(mx,(int)s1.size());
				}
			}
		}*/
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i-1]==b[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
					mx=max(mx,dp[i][j]);
				}
				else{
					dp[i][j]=0;
				}
			}
		}
		cout<<n+m-2*mx<<endl;
	}
}