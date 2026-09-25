#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		int mn=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		bool check=true;
		for(int i=0;i<n;i++){
			int d=max(i,n-1-i);
			if(v[i]<=2*d){
				check=false;
				break;
			}
		}
		if(check) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}