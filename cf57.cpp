#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m,i,j;
		cin>>n>>m>>i>>j;
		if((i==1 && j==1)||(i==n && j==m)){
			cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
			continue;
		}
		if((i==n && j==1)||(i==1 && j==m)){
			cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
			continue;
		}
		cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
	}
}