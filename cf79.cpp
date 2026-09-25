#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v(n);
		int j=1;
		int f=k;
		while(k>0){
			k--;
			for(int i=k;i<n;i=i+f){
				v[i]=j;
				j++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}