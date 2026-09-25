#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		vector<long long>v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());	
		long long i=0;
		long long j=n-1;
		int cnt=0;
		while(i<j){
			if(v[i]+v[j]==k){
				i++;
				j--;
				cnt++;
			}
			else if((v[i]+v[j])<k) i++;
			else if((v[i]+v[j])>k) j--;
		}
		cout<<cnt<<endl;
	}
}