#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,r,b;
		cin>>n>>r>>b;
		int g=b+1;
		int mx=r/g;
		int ex=r%g;
		string s;
		for(int i=0;i<g;i++){
			int cnt=mx+(ex>0);
			while(cnt--)s+='R';
			if(ex>0)ex--;
			if(i<b)s+='B';
		}
		cout<<s<<endl;
	}
}