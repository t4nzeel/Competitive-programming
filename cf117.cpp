#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v(n);
		int ans=INT_MAX;
		int cnte=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(v[i]%2==0)cnte++;
			if(k!=4)ans=min(ans,(k-v[i]%k)%k);
		}
		if(k!=4)cout<<ans<<endl;
		else{
			int m4=INT_MAX;
			for(int x:v){
				m4=min(m4,(4-x%4)%4);
			}
			int m2e;
			if(n==1)m2e=INT_MAX;
			else m2e=max(0,2-cnte);
			cout<<min(m4,m2e)<<endl;
		}
	}
}