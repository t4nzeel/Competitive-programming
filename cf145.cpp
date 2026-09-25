#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int &x:v)cin>>x;
		sort(v.begin(),v.end(),greater<int>());
		for(int x:v)cout<<x<<" ";
		cout<<endl;
	}
}