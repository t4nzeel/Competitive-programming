#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt0=0,cnt1=0;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(v[i]==0) cnt0++;
			else if(v[i]==1) cnt1++;
		}
		if(cnt1==0){
			cout<<0<<endl;
			continue;
		}
		long long ans=cnt1*pow(2,cnt0);
		cout<<ans<<endl;
	}
}