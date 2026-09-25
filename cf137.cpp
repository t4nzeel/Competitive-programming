#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int ans=1e9;
		for(int ad=0;ad<=30;ad++){
			ll nb=b+ad;
			if(nb==1)continue;
			ll x=a;
			int op=ad;
			while(x>0){
				x/=nb;
				op++;
			}
			ans=min(op,ans);
		}
		cout<<ans<<endl;
	}
}