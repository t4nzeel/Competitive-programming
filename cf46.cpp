#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n%2!=0 || n<4){
			cout<<-1<<endl;
			continue;
		}
		long long mx,mn;
		long long d4=n/4;
		long long d6=n/6;
		mx=d4;
		long long rem=n-(d6*6);
		if(rem%4!=0 && rem!=0){
			d6-=1;
			rem=n-(d6*6);
		}
		if(rem%4==0 && rem!=0){
			long long ad=rem/4;
			mn=ad+d6;
		}
		else mn=d6;
		cout<<mn<<" "<<mx<<endl;
	}
}