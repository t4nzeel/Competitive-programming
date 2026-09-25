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
    	char c;
    	cin>>n>>c;
    	string s;
    	cin>>s;
    	bool ok=true;
    	for(char ch:s){
    		if(ch!=c){
    			ok=false;
    			break;
    		}
    	}
    	if(ok){
    		cout<<0<<endl;
    		continue;
    	}
    	bool found=false;
    	for(ll x=1;x<=n;x++){
    		bool one=true;
    		for(ll j=x;j<=n;j+=x){
    			if(s[j-1]!=c){
    				one=false;
    				break;
    			}
    		}
    		if(one){
    			cout<<1<<endl;
    			cout<<x<<endl;
    			found=true;
    			break;
    		}
    	}
    	if(!found){
    		cout<<2<<endl;
    		cout<<n<<" "<<n-1<<endl;
    	}
    }
}