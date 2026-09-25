#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool check_prime(ll n){
	if(n<2)return false;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll d;
		cin>>d;
		ll p=d+1;
		while(!check_prime(p))p++;
		ll q=p+d;
		while(!check_prime(q))q++;
		cout<<p*q<<endl;
	}
}