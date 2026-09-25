#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		ll s=0;
		int ne=0;
		int mn=INT_MAX;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int x;
				cin>>x;
				s+=abs(x);
				mn=min(mn,abs(x));
				if(x<0)ne++;
			}
		}
		if(ne%2==0)cout<<s<<endl;
		else cout<<s-2LL*mn<<endl;
	}
}