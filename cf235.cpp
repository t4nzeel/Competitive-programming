#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    ll totalw=0,left=0,ans=0;
    for(ll i=1;i<s.size();i++){
    	if(s[i]=='v' && s[i-1]=='v')totalw++;
    }
    for(ll i=0;i<s.size();i++){
    	if(s[i]=='v' && i>0 &&  s[i-1]=='v')left++;
    	if(s[i]=='o'){
    		ll right=totalw-left;
    		ans+=left*right;
    	}
    }
    cout<<ans<<endl;
}