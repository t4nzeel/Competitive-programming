#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		v.erase(unique(v.begin(),v.end()),v.end());
	int N=v.size();
	int best=0;
	int curreny=0;
	for(int i=0;i<n;i++){
		if(i==0 || v[i]!=v[i-1]+1){
			curreny=0;
		}
		curreny++;
		best=max(best,curreny);
	}
	cout<<best<<endl;		
	}
}