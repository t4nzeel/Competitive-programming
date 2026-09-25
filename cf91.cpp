#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		for(int i=0;i<n;i++){
			int s=0,g=0;
			for(int j=i+1;j<n;j++){
				if(v[i]>v[j]) s++;
				else  if(v[j]>v[i]) g++;
			}
			cout<<max(s,g)<<" ";
		}
		cout<<endl;
	}
}