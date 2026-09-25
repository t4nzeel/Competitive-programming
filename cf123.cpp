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
		vector<int>pref(n),suff(n);
		vector<int>freq(26);
		int cnt=0;
		for(int i=0;i<n;i++){
			int x=s[i]-'a';
			if(freq[x]==0)cnt++;
			freq[x]++;
			pref[i]=cnt;
		}
		fill(freq.begin(),freq.end(),0);
		cnt=0;
		for(int i=n-1;i>=0;i--){
			int x=s[i]-'a';
			if(freq[x]==0)cnt++;
			freq[x]++;
			suff[i]=cnt;
		}
		int ans=0;
		for(int i=0;i<n-1;i++){
			ans=max(ans,pref[i]+suff[i+1]);
		}
		cout<<ans<<endl;
	}	
}