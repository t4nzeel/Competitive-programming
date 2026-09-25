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
		vector<int>v(n),v1(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		for(int i=0;i<n;i++){
			v1[i]=n+1-v[i];
		}
		for(int i=0;i<n;i++){
			cout<<v1[i]<<" ";
		}
		cout<<endl;
	}
}