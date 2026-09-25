#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cnt0=0,cnt1=0;
		for(char c:s){
			if(c=='0')  cnt0++;
			else cnt1++;
		}
		int pairs=min(cnt1,cnt0);
		if(pairs%2!=0) cout<<"DA"<<endl;
		else cout<<"NET"<<endl;
	}
}