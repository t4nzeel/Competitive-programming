#include<iostream>
#include<string>
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
		string s;
		cin>>s;
		int c0=0,c1=0;
		for(char c: s){
			if(c=='0') c0++;
			else c1++;
		}
		int pair=n/2;
		int min_good=max(c0,c1)-pair;
		int max_good=(c0/2)+(c1/2);
		if(k<min_good || k>max_good) cout<<"No"<<endl;
		else if((k-max_good)%2!=0) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}