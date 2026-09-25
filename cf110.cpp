#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int xr,yr,xb,yb;
		cin>>xr>>yr>>xb>>yb;
		string s;
		for(int i=1;i<=12;i++){
			if(i==xr || i==yr)s+="a";
			if(i==xb || i==yb) s+="b";
		}
		if(s=="abab" || s=="baba") cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}