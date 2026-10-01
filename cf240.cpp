#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    ll n=s.size();
    for(ll i=1;i<n;i++){
    	if(s[i]==s[i-1]){
    		for(char c='a';c<='z';c++){
    			if(c!=s[i-1]&&(i+1==n || c!=s[i+1])){
    				s[i]=c;
    				break;
    			}
    		}
    	}
    }
    cout<<s<<endl;
}