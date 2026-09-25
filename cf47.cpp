#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int  cnt=0;
		bool ok=true;
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		for(int i=n-2;i>=0;i--){
			while(v[i]>=v[i+1]){
				if(v[i]==0){
					ok=false;
					break;
				}
				v[i]/=2;
				cnt++;
			}
			if(!ok) break;
		}
		if(!ok) cout<<-1<<endl;
		else cout<<cnt<<endl;
	}
}