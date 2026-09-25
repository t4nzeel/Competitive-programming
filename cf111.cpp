#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int mx=(n+m-1)/m;
		if((mx+k)<n) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}