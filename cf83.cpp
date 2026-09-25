#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<long long>>v(n,vector<long long>(n));
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>v[i][j];
		long long ans=0;
		for(int d=-(n-1);d<=(n-1);d++){
			long long mn=LLONG_MAX;
			for(int i=0;i<n;i++){
				int j=i-d;
				if(j>=0 && j<n) mn=min(mn,v[i][j]);
			}
			if(mn<0) ans+=-mn;
		}
		cout<<ans<<endl;	
	}
}