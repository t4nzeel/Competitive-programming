#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int>v;
		int cnt=0;
		for(int i=0;i<n;i++){
			if(i==x){
				continue;
			}
			v.push_back(i);
		}
		if(v.size()!=n) v.push_back(x);
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}