#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n;
		cin>>s;
		vector<int>v;
		for(int i=0;i<n;i++){
			if(s[i]=='1')v.push_back(i);
		}
		int k=v.size();
		if(k&1)cout<<"No"<<endl;
		else if(k==0)cout<<"Yes"<<endl;
		else if(k==2)cout<<(v[1]-v[0]>1 ? "Yes":"No")<<endl;
		else cout<<"Yes"<<endl;
	}
}