#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1 || n==3) cout<<-1<<endl;
		else if(n==2) cout<<66<<endl;
		else if(n==4) cout<<3366<<endl;
		else if(n%2!=0){
			string s="6636";
			int rem=n-4;
			for(int i=0;i<rem;i++){
				s+='3';
			}
			reverse(s.begin(),s.end());
			cout<<s<<endl;
		}
		else if(n%2==0){
			string s="66";
			int rem=n-2;
			for(int i=0;i<rem;i++){
				s+='3';
			}
			reverse(s.begin(),s.end());
			cout<<s<<endl;
		}
	}
}