#include<bits/stdc++.h>
using namespace  std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int ans=(n+k-3)/(k-1);
		cout<<ans<<endl;
	}
}