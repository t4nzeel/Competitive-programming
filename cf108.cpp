#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++) v[i]=i+1;
		vector<vector<int>>ans(4,vector<int>(n));
		for(int i=0;i<4;i++){
			if(i==2){
				rotate(v.begin(),v.end()-1,v.end());
				ans[i]=v;
				rotate(v.begin(),v.begin()+1,v.end());
			}
			else ans[i]=v;
		}
		 for(int i = 0; i < 4; i++) {
            for(int x : ans[i])
                cout << x << " ";
        }
        cout<<endl;
	}
}