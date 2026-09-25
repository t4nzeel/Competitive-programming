#include<iostream>
#include<vector>
#include<cmath>
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
		if(n%2==0){
			int first=n/2;
			v[0]=first;
			for(int i=1;i<n;i++){
				if(i%2!=0) v[i]=abs(v[i-1]+i);
				else v[i]=abs(v[i-1]-i);
			}
		}
		else{
			int first=n/2;
			v[0]=first+1;
			for(int i=1;i<n;i++){
				if(i%2!=0) v[i]=abs(v[i-1]-i);
				else v[i]=abs(v[i-1]+i);
			}
		}
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}