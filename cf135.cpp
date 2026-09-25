#include<bits/stdc++.h>
using namespace std;
int prefXOR(int a){
	if(a%4==0)return a;
	if(a%4==1)return 1;
	if(a%4==2)return a+1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int x=prefXOR(a-1);
		if(x==b)cout<<a<<endl;
		else{
			int need=x^b;
			if(need==a)cout<<a+2<<endl;
			else cout<<a+1<<endl;
		}
	}
}
