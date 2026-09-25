#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		string s;
		cin>>s;
		long long dash=0,under=0;
		for(char c:s){
			if(c=='_') under++;
			else dash++;
		}
		if(dash<2 || under==0){
			cout<<0<<endl;
			continue;
		}
		long long left=dash/2;
		long long right=dash-left;
		cout<<under*left*right<<endl;
	}
}