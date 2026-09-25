#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string rearranged_string(string s){
	vector<int>v;
	int cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!='+') v.push_back(stoi(string(1,s[i])));
		else cnt++;
	}
	sort(v.begin(),v.end());
	string s1="";
	for(int i=0;i<v.size();i++){
		s1+=to_string(v[i]);
		if(cnt!=0){
			s1.push_back('+');
			cnt--;
		}
	}
	return s1;
}
int main(){
	string s;
	cin>>s;
	cout<<rearranged_string(s);
}