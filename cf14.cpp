#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		const int MAX_B = 2000000000;
		int r=0,l=0;
		for(int i=0;i<v.size();i++){
			if(v[i]>a) r++;
			else if(v[i]<a) l++;
		}
		if(l>=r && l>0){
			b=2*v[l-1]+1-a;
			if(b<0) b=0;
		}
		else if(r>0){
			b=2*v[n-r]-1-a;
			if(b>MAX_B) b=MAX_B;
		}
		else {
			b=a+1;
			if(b>MAX_B) b=MAX_B;
		}
		cout<<b<<endl;
	}
}