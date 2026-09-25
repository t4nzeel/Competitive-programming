#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		if(a==b){
			cout<<0<<" "<<0<<endl;
			continue;
		}
		long long d=abs(a-b);
		cout<<d<<" "<<min(b%d,d-(b%d))<<endl;;
	}
}