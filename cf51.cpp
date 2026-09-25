#include<iostream>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long x,n;
		cin>>x>>n;
		long long q=n/4;
		long long r=n%4;
		if(x%2!=0){
			if(r==0) cout<<x<<endl;
			else if(r==1) cout<<(x+(4*q)+1)<<endl;
			else if(r==2) cout<<x-1<<endl;
			else cout<<x-(4*q+4)<<endl;
 		}
 		else{
 			if(r==0) cout<<x<<endl;
			else if(r==1) cout<<(x-(4*q)-1)<<endl;
			else if(r==2) cout<<x+1<<endl;
			else cout<<x+(4*q+4)<<endl;
 		}
	}
}