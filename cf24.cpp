#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		vector<long long>v;
		long long d=11;
		while(n>=d){
			if(n%d==0) v.push_back(n/d);
			d=(d-1)*10+1;
		}
		cout<<(int)v.size()<<endl;
		if(v.size()==0) continue;
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}