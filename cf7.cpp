#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int No_of_moves(vector<vector<int>>& v){
	int x=0,y=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(v[i][j]==1){
				x=i;
				y=j;
				return (abs(x-2)+abs(y-2));
			}
		}
	}
	return 0;
}
int main(){
	vector<vector<int>>v(5,vector<int>(5));
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>v[i][j];
		}
	}
	cout<<No_of_moves(v);
}