#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int compare_strings(string s1,string s2){
	/*for(int i=0;i<s1.size();i++){
		s1[i]=tolower(s1[i]);
		s2[i]=tolower(s2[i]);
		if(s1[i]==s2[i]) continue;
		else if(s1[i]>s2[i]) return 1;
		else return -1;
	}
	return 0;*/
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	transform(s2.begin(),s2.end(),s2.begin(),::tolower);
	if(s1==s2) return 0;
	else if(lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end())) return -1;
	else return 1;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout<<compare_strings(s1,s2);
}