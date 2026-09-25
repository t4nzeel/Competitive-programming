#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int No_Of_implementations(vector<vector<int>>&v){
	int cnt=0;
	for(int i=0;i<v.size();i++){
		int sum=accumulate(v[i].begin(),v[i].end(),0);
		if(sum>=2) cnt++;
	}
	return cnt;
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>>v(n,vector<int>(3));
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>v[i][j];
		}
	}
	cout<<No_Of_implementations(v);
}