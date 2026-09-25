#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		map<char,int>freq;
		int cnt=0;
		vector<int>d(n,0);
		for(int i=0;i<n;i++){
			freq[s[i]]++;
			if(freq[s[i]]==1)cnt++;
			d[i]=cnt;
		}
		int ans=0;
		for(int i=0;i<n;i++){
			ans+=d[i];
		}
		cout<<ans<<endl;
	}
}