#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int last;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]!='0'){
				last=i;
				break;
			}
		}
		int cnt0=0;
		int ans=s.size()-1;
		for(int i=0;i<last;i++){
			if(s[i]=='0') ans--;
		}
		cout<<ans<<endl;
	}
}