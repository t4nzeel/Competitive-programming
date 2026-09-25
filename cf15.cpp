#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,n;
		int move=0;
		cin>>a>>b>>n;
		if(n*b<=a || a==b) cout<<"1"<<endl;
		else cout<<"2"<<endl;	
	}
}