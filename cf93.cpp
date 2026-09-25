#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int r=n%5;
		int m=n/5;
		string vowels = "aeiou";
		string result = "";
		for(int i = 0; i < 5; i++){
    		int freq = n/5 + (i < n%5 ? 1 : 0);
    		result += string(freq, vowels[i]);
		}
		cout<<result<<endl;
	}
}