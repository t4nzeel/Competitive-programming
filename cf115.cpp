#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,x;
		cin>>a>>b>>x;
		if(b>a)swap(a,b);
		int A=a;
		int p=0;
		int ans=INT_MAX;
		while(A>=0){
			if(b<=A)ans=min(ans,A-b+p);
			else{
				ans=min(ans,b-A+p);
				int B=b;
				int o=0;
				while(B>A){
					B/=x;
					o++;
					if(B>A)ans=min(ans,B-A+o+p);
				}
				ans=min(ans,A-B+p+o);
			}
			if(A==0)break;
			A/=x;
			p++;
		}
		int B=b;
		A=a;
		p=0;
		swap(A,b);
		while(A>=0){
			if(b<=A)ans=min(ans,A-b+p);
			else{
				ans=min(ans,b-A+p);
				int B=b;
				int o=0;
				while(B>A){
					B/=x;
					o++;
					if(B>A)ans=min(ans,B-A+o+p);
				}
				ans=min(ans,A-B+p+o);
			}
			if(A==0)break;
			A/=x;
			p++;
		}
		cout<<ans<<endl;
	}
}