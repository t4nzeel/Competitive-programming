#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int gcd(int a,int b){
	while(a>0 && b>0){
		if(a>b) a=a%b;
		else b=b%a;
	}
	if(a==0) return b;
	else return a;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int mn=0;
		for(int i=1;i<=v.size();i++){
			mn=gcd(mn,abs(v[i-1]-i));
		}
		cout<<mn<<endl;
	}
}