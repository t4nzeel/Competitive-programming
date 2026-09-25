#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,p,q;
		cin>>n>>m>>p>>q;
		if(n%p==0){
			if(m==(n/p)*q) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else cout<<"Yes"<<endl;
	}
}