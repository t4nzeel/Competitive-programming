#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int &x:v)cin>>x;
		int i=0;
		vector<int>ans(n);
		bool ok=true;
		while(i<n){
			int j=i;
			while(j+1<n && v[j+1]==v[i])j++;
			if(i==j){
				ok=false;
				break;
			}
			ans[i]=j+1;
			for(int k=i+1;k<=j;k++)ans[k]=k;
			i=j+1;
		}
		if(!ok){
			cout<<-1<<endl;
			continue;
		}
		for(int x:ans)cout<<x<<" ";
		cout<<endl;
	}
}