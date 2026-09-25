#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n,x,y;
		cin>>n>>x>>y;
		string s;
		cin>>s;
		long long a=0,b=0;
		for(long long i=0;i<s.size();i++){
			if(s[i]=='4') a++;
			else b++;
		}
		x=abs(x);
		y=abs(y);
		if((a+2*b)<(x+y)) cout<<"No"<<endl;
		else if((a+b)<max(x,y))  cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}