#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m=n-1,c=0;;
		while(m>0){
			m=m>>1;
			c++;
		}
		int j=1;
		c--;
		while(c>0){
			j*=2;
			c--;
		}
		for(int i=n-1;i>=j;i--)cout<<i<<" ";
		for(int i=0;i<j;i++)cout<<i<<" ";
		cout<<endl;
	}
}