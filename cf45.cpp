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
		int cnt0=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(v[i]==0) cnt0++;
		}
		int left=0;
		int right=n-1;
		bool found_zero=false;
		while(v[left]==0) left++;
		while(v[right]==0) right--;
		for(int i=left;i<=right;i++){
			if(v[i]==0) found_zero=true;
		}
		if(cnt0==n) cout<<0<<endl;
		else if(found_zero) cout<<2<<endl;
		else cout<<1<<endl;
	}
}