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
    	ll cnt=0;
    	for(char c:s){
    		if(c=='0')cnt++;
    	}
    	if(cnt==1)cout<<"BOB"<<endl;
    	else if(cnt%2==0)cout<<"BOB"<<endl;
    	else cout<<"ALICE"<<endl;
    }
}