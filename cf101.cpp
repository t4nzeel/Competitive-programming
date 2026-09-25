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
		int cnt=0;
		for(int i=1;i<n;i++){
			if(v[i]%(abs(v[i-1]-v[i]))==0)cnt++;
		}
		cout<<cnt<<endl;
	}
}