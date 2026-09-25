#include<iostream>
#include<vector>
using namespace std;
int forward_ones(vector<int>&v,int k){
	if(v[k-1]==0){
		for(int i=k-1;v[i]==0;i--) k--;
	}
	else{
		for(int i=k;v[i]==v[i-1];i++) k++;
	}
	return k;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<int>v;
	v.resize(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<forward_ones(v,k);
}