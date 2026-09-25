#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int h;
		cin>>h;
		vector<long long>v(h);
		for(int i=0;i<h;i++){
			cin>>v[i];
		}
		long long ans=LLONG_MAX;
		long long su=0;
		for(int i=0;i<h;i++){
			su+=v[i];
			ans=min(ans,su/(i+1));
			cout<<ans<<" ";
		}
		cout<<endl;
	}
}