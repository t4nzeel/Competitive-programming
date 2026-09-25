#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		vector<int>freq(k,0);
		int kk=0;
		for(int i=0;i<v.size();i++){
			if(v[i]==k) kk++;
			if(v[i]<k) freq[v[i]]++;
		}
		int ans=0;
		for(int i=0;i<k;i++){
			if(!freq[i]) ans++;
		}
		cout<<max(ans,kk)<<endl;
	}
}