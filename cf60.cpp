#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<long long>v(n*k);
		for(int i=0;i<v.size();i++){
			cin>>v[i];
		}
		int m=(n+1)/2;
		int r=(n*k)-1;
		long long ans=0;
		for(int i=0;i<k;i++){
			int medianIndx=r-(n-m);
			ans+=v[medianIndx];
			r=medianIndx-1;
		}
		cout<<ans<<endl;
	}
}