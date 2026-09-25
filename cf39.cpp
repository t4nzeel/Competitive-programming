#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int curr=1,ans=1;
		for(int i=1;i<n;i++){
			if(s[i]!=s[i-1]) curr=1;
			else curr++;
			ans=max(ans,curr);
		}
		cout<<ans+1<<endl;
	}
}