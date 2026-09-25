#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		long long a,b,n;
		cin>>a>>b>>n;
		vector<long long>v(n);
		long long ans=b;
		for(int i=0;i<n;i++){
			cin>>v[i];
			ans+=min(v[i],a-1);
		}
		cout<<ans<<endl;
	}
}