#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x,y,z;
		cin>>n>>x>>y>>z;
		long long noAI=(n+(x+y)-1)/(x+y);
		long long AI;
		if(x*z>=n) AI=(n+x-1)/x;
		else{
			long long rem=n-x*z;
			AI=z+(rem+(x+(10*y))-1)/(x+10*y);
		}
		cout<<min(AI,noAI)<<endl;
	}
}