#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int n=s1.size();
		int m=s2.size();
		vector<int>freq(26,0);
		for(char c : s2){
			freq[c-'A']++;
		}
		for(int i=n-1;i>=0;i--){
			if(freq[s1[i]-'A']>0) freq[s1[i]-'A']--;
			else s1[i]='.';
		}
		string s3="";
		for(char c:s1){
			if(c!='.') s3+=c;
		}
		if(s3==s2) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}