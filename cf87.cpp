#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll>v(n);
		ll sum=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
		}
		if(n==2){
			cout<<v[1]-v[0]<<endl;
			continue;
		}
		cout<<sum-2*v[n-2]<<endl;	
	}
}