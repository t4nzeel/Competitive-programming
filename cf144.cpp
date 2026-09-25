#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		int cnta=0,cntb=0;
		while(a%2==0){
			a/=2;
			cnta++;
		}
		while(b%2==0){
			b/=2;
			cntb++;
		}
		if(a!=b){
			cout<<-1<<endl;
			continue;
		}
		int d=abs(cnta-cntb);
		cout<<(d+2)/3<<endl;
	}
}