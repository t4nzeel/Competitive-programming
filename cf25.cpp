#include<iostream>
using namespace std;
long long GCD(long long a,long long b){
	while(a>0 && b>0){
		if(a>b) a=a%b;
		else b=b%a;
	}
	if(a==0) return b;
	else return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,k;
		cin>>a>>b>>k;
		long long g=GCD(a,b);
		if((a/g)<=k && (b/g)<=k) cout<<1<<endl;
		else cout<<2<<endl;
	}
}