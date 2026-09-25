#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	string s;
    	cin>>s;
    	vector<ll>v(26,0);
    	ll d=0;
    	for(char c:s){
    		if(v[c-'a']==0)d++;
    		v[c-'a']++;
    	}
    	bool ok=true;
    	for(ll c=0;c<26 && ok;c++){
    		ll l=-1;
    		for(ll i=0;i<s.size();i++){
    			if(s[i]-'a'==c){
    				if(l!=-1 && i-l!=d){
    					ok=false;
    					break;
    				}
    				l=i;
    			}
    		}
    	}
    	if(ok)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    }
}