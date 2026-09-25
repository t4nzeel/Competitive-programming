#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cntb=0,cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(') cntb++;
			else cntb--;
			if(cntb==0) cnt++;
			if(cnt==2) break;
		}
		if(cnt==2) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}