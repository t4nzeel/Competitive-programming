#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		if(n==1){
			cout<<"No"<<endl;
			continue;
		}
		string r=s;
		reverse(r.begin(),r.end());
		if(k==0){
			if(s<r) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else{
			bool allSame=true;
			for(int i=1;i<n;i++){
				if(s[i]!=s[0]){
					allSame=false;
					break;
				}
			}
			if(allSame) cout<<"No"<<endl;
			else cout<<"Yes"<<endl;
		}
	}
}