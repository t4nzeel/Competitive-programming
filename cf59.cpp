#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int>v(n);
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
		}
		long long mn=(sum+x-1)/x;
		long long mx=0;
		for(int i=0;i<v.size();i++){
			mx+=(v[i]+x-1)/x;
		}
		cout<<mn<<" "<<mx<<endl;
	}
}