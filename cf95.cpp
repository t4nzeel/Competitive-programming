#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>freq(n+1,0);
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			freq[x]++;
		}
		bool ch=true;
		for(int i=1;i<=n;i++){
			if(freq[i]%2!=0){
				cout<<"Yes"<<endl;
				ch=false;
				break;
			}
		}
		if(ch) cout<<"No"<<endl;
	}
}