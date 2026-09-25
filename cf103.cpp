#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n==10){
			cout<<-1<<endl;
			continue;
		}
		long long r=n/12;
		long long b=12*r;
		long long a=n-b;
		if(a==10){
			r--;
			b=12*r;
			a=n-b;
		}
		cout<<a<<" "<<b<<endl;
	}
}