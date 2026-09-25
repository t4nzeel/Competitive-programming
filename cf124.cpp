#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n%2==0){
			cout<<n/2<<" "<<n/2<<endl;
			continue;
		}
		ll p=n;
		for(ll i=3;i*i<=n;i+=2){
			if(n%i==0){
				p=i;
				break;
			}
		}
		ll g=n/p;
		cout<<g<<" "<<n-g<<endl;
	}
}