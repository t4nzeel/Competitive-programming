#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		map<char,int>m;
		for(char c : s){
			m[c]++;
		}
		int rem=n-k;
		int need=rem/2;
		int pairs=0;
		for(auto &it : m){
			pairs+=it.second/2;
		}
		if(pairs>=need) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}