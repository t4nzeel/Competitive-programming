#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		int mx=INT_MIN;
		int mn=INT_MAX;
		for(int i=0;i<n;i++){
			cin>>v[i];
			mx=max(mx,v[i]);
			mn=min(mn,v[i]);
		}
		cout<<mx-mn+1<<endl;
	}
}