#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;;
		cin>>n;
		vector<int>v(n);
		int check=0;
		for(int i=0;i<n;i++) cin>>v[i];
		for(int i=1;i<n-1;i++){
			if(v[i]>v[i-1] && v[i]>v[i+1]){
				cout<<"Yes"<<endl;
				cout<<i<<" "<<i+1<<" "<<i+2<<endl;
				check=1;
				break;
			}
		}
		if(check==0) cout<<"No"<<endl;	
	}
}