#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long>v(n);
		unordered_map<long long,int>freq; 
		for(int i=0;i<n;i++) cin>>v[i];
		int mx=0;
		for(auto x : v) mx=max(mx,++freq[x]);
		if(mx==n){
			cout<<0<<endl;
			continue;
		}
		int clones=0;
		int cur=mx;
		while(cur<n){
			cur*=2;
			clones++;
		}
		int swaps=n-mx;
		cout<<swaps+clones<<endl;
	}
}