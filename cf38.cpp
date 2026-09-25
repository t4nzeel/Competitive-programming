#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		int ans=1,cnt=1;
		for(int i=1;i<n;i++){
			if(v[i]-v[i-1]>k) cnt=1;
			else cnt++;
			ans=max(ans,cnt);
		}
		cout<<n-ans<<endl;
	}
}