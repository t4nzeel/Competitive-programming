#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int n;
		cin>>n;
		cin>>s;
		int cntU=0;
		for(char c: s){
			if(c=='U')cntU++;
		}
		if(cntU & 1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}