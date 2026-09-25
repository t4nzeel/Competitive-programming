#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n+1,0);
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v[x]++;
		}
		int single=0,multi=0;
		for(int i=1;i<=n;i++){
			if(v[i]==1) single++;
			else if(v[i]>=2) multi++;
		}
		int ans=2*((single+1)/2)+multi;
		cout<<ans<<endl;
	}
}