#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool ok=true;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(abs(x-i)>1) ok=false;
		}
		if(ok) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}