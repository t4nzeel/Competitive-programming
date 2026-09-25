#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<char>>v(n,vector<char>(m));
		int cnt=0;
		int x,y;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>v[i][j];
				if(cnt==0){
					x=i;
					y=j;
				}
				if(v[i][j]=='#')cnt++;
			}
		}
		if(cnt==1){
			cout<<x+1<<" "<<y+1<<endl;
			continue;
		}
		long long r=(1+sqrt(2*cnt-1))/2;
		cout<<x+r<<" "<<y+1<<endl;
	}
}