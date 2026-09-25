#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool fair(ll n){
	ll t=n;
	while(t){
		int d=t%10;
		if(d!=0 && n%d!=0)return false;
		t/=10;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		while(!fair(n)){
			n++;
		}
		cout<<n<<endl;
	}
}