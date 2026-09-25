#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cnt0=0,cnt1=0,len=0;
		for(char c:s){
			if(c=='0')cnt0++;
			else cnt1++;
		}
		for(char c:s){
			if(c=='0'){
				if(cnt1>0){
					len++;
					cnt1--;
				}
				else break;
			}
			else{
				if(cnt0>0){
					len++;
					cnt0--;
				}
				else break;
			}
		}
		cout<<((int)s.size()-len)<<endl;
	}
}