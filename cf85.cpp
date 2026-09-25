#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		bool ok=false;
		int x=0,y=0;
		for(int i=0;i<100*n;i++){
			char c=s[i%n];
			if(c=='N') y++;
			else if(c=='E') x++;
			else if(c=='S') y--;
			else if(c=='W') x--;
			if(x==a && y==b){
				ok=true;
				break;
			}
		}
		if(ok) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}