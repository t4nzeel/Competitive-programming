#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(2*n+1);
		vector<bool>used(2*n+1,false);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				int x;
				cin>>x;
				v[i+j]=x;
				used[x]=true;
			}
		}
		for(int num=1;num<=2*n;num++){
			if(!used[num]){
				v[1]=num;
				break;
			}
		}
		for(int i=1;i<=2*n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}9
}