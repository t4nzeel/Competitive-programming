#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,c;
	int n;
	cin>>n>>s;
	for(int i=1;i<n;i++){
		if(s[i]<s[i-1]){
			cout<<"Yes"<<endl;
			cout<<i<<" "<<i+1<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
}