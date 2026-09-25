#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		string s1="";
		for(int i=0;i<n;i++){
			if(s[i]=='0'){
				if(i==0 || s[i-1]!='0') s1+='0';
			}
			else s1+='1';
		}
		int cnt0=0,cnt1=0;
		for(int i=0;i<s1.size();i++){
			if(s1[i]=='1') cnt1++;
			else cnt0++;
		}
		if(cnt0>=cnt1) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}