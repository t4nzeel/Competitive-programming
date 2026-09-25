#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>a(k+1);
		for(int i=1;i<k+1;i++) cin>>a[i];
		vector<int>b(n+1);
		for(int i=1;i<n+1;i++) cin>>b[i];
		vector<vector<int>>l(k+2);
		for(int i=1;i<=n;i++){
			l[b[i]].push_back(i);
		}
		vector<int>ops;
		for(int i=k;i>=1;i--){
			for(int idx : l[i]){
				int steps=(k+1-i);
				for(int s=0;s<steps;s++){
					ops.push_back(idx);
				}
			}
		}
		cout<<ops.size()<<endl;
		for(int x : ops) cout<<x<<" ";
		cout<<endl;
	}
}