#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n+1);
		for(int i=1;i<=n;i++) cin>>v[i];
		for(int i=1;i<=n;i+=2){
			for(int j=i;j<=n;j*=2){
				for(int k=i*2;k<=n;k*=2){
					if(v[k/2]>v[k]) swap(v[k/2],v[k]);
				}
			}
		}
		if(is_sorted(begin(v),end(v))) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}