#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		bool ss=false;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(v[i]==67) ss=true;
		}
		if(ss){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}