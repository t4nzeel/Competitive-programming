#include<iostream>
#include<vector>
#include<string>
using namespace std;
int updated_value(vector<string>&v){
	int x=0;
	for(int i=0;i<v.size();i++){
		string s=v[i];
		if(s[0]=='+') ++x;
		else if(s[0]=='-') --x;
		else if(s[1]=='+') x++;
		else if(s[1]=='-') x--;
	}
	return x;
}
int main(){
	int n;
	cin>>n;
	vector<string>v;
	v.resize(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<updated_value(v);
}