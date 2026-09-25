#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int &x:v) cin>>x;
		int par=0;
	    vector<int>ans;
		for(int i=n-1;i>=0;i--){
			if(par==1) v[i]=-v[i];
			if(v[i]>0){
				ans.push_back(i);
				par^=1;
			}
		}
		cout<<ans.size()<<" "<<endl;
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]+1<<" ";
		}
		cout<<endl;
	}
}