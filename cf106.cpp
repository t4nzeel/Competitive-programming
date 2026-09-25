#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int p1,p2,p3;
		cin>>p1>>p2>>p3;
		int s=p1+p2+p3;
		if(s & 1) cout<<-1<<endl;
		else cout<<min(s/2,p1+p2)<<endl;
	}
}