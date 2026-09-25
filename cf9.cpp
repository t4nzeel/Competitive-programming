#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int hero_way(string s){
	/*string s1="";
	for(int i=0;i<s.size();i++){
		if(s1.find(s[i])!=string::npos) continue;
		else s1+=s[i];
	}
	return (s1.length());*/
	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());
	return s.length();
}
int main(){
	string s;
	cin>>s;
	if((hero_way(s))%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
}
