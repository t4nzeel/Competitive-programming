#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int n;
		cin>>n>>s;
		stack<char>st;
		for(char c:s){
			if(st.empty()){
				st.push(c);
				continue;
			}
			if(!st.empty()){
				if(c==')' && st.top()=='('){
					st.pop();
				}
				else{
					st.push(c);
				}
			}
		}
		int ans=st.size()/2;
		cout<<ans<<endl;
	}
}