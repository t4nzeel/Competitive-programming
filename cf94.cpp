#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		vector<int>v(n);
		for(int i=0;i<(n-m);i++){
			v[i]=n-i;
		}
		for(int j=0;j<m;j++){
			v[n-m+j]=j+1;
		}
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}