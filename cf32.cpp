#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int xk,yk;
		cin>>xk>>yk;
		int xQ,yQ;
		cin>>xQ>>yQ;
		set<pair<int,int>>king,queen;
		int sign[4][2]={{1,1},{1,-1},{-1,1},{-1,-1}};
		for(int i=0;i<4;i++){
			int sx=sign[i][0];
			int sy=sign[i][1];
			king.insert({xk+sx*a,yk+sy*b});
			king.insert({xk+sx*b,yk+sy*a});
			queen.insert({xQ+sx*a,yQ+sy*b});
			queen.insert({xQ+sx*b,yQ+sy*a});
		}
		int cnt=0;
		for(auto pos : king){
			if(queen.count(pos)) cnt++;
		}
		cout<<cnt<<endl;
	}
}