#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>v(n);
		for(long long &x:v)cin>>x;
		sort(v.begin(),v.end());
		if(n==2){
			cout<<v[1]<<" "<<v[0]<<endl;
			continue;
		}
		bool check=true;
		for(int i=0;i<=n-3;i++){
			if(v[i+2]%v[i+1]!=v[i]){
				check=false;
				break;
			}
		}
		if(!check) cout<<-1<<endl;
		else cout<<v[n-1]<<" "<<v[n-2]<<endl;
	}
}