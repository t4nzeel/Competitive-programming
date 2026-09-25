#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int cnt=0;
		if(s[0]=='u'){
			s[0]='s';
			cnt++;
		}
		if(s[n-1]=='u'){
			s[n-1]='s';
			cnt++;
		}
		for(int i=1;i<n;i++){
			if(s[i]=='u' && s[i-1]=='u'){
				s[i]='s';
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}