#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<string>v={"00","25","50","75"};
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int ans=INT_MAX;
		for(string x:v){
			int i=n-1;
			int cnt=0;
			while(i>=0 && s[i]!=x[1]){
				cnt++;
				i--;
			}
			if(i<0) continue;
			i--;
			while(i>=0 && s[i]!=x[0]){
				cnt++;
				i--;
			}
			if(i<0) continue;
			ans=min(ans,cnt);
		}
		cout<<ans<<endl;
	}
}