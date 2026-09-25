#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n;
    	cin>>n;
    	string s;
    	cin>>s;
    	string ans="";
    	for(char c='a';c<='z';c++){
    		string temp(1,c);
    		if(s.find(temp)==string::npos){
    			ans=temp;
    			break;
    		}
    	}
    	if(ans.empty()){
    		for(char i='a';i<='z' && ans.empty();i++){
    			for(char j='a';j<='z';j++){
    				string temp="";
    				temp+=i;
    				temp+=j;
    				if(s.find(temp)==string::npos){
    					ans=temp;
    					break;
    				}
    			}
    		}
    	}
    	if(ans.empty()){
    		for(char i='a';i<='z' && ans.empty();i++){
    			for(char j='a';j<='z' && ans.empty();j++){
    				for(char k='a';k<='z';k++){
    					string temp="";
    					temp+=i;
    					temp+=j;
    					temp+=k;
    					if(s.find(temp)==string::npos){
    						ans=temp;
    						break;
    					}
    				}
    			}
    		}
    	}
    	cout<<ans<<endl;
    }
}