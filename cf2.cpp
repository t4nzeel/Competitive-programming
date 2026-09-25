#include<iostream>
#include<string>
#include<vector>
using namespace std;
string compress(string S){
	int n=S.length();
	if(n>10){
		string s1=string(1,S[0])+to_string(n-2)+string(1,S[n-1]);
		return s1;
	}
	return S;
}
int main(){
	vector<string>v;
	int N;
	cin>>N;
	v.resize(N);
	for(int i=0;i<N;i++){
		cin>>v[i];
	}
	for(int i=0;i<N;i++){
		cout<<compress(v[i])<<endl;
	}
}