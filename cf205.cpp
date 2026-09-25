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
    	string a,b;
    	cin>>a>>b;
    	vector<bool>legal(n);
    	ll balance=0;
    	for(ll i=0;i<n;i++){
    		if(a[i]=='0')balance++;
    		else balance--;
    		if(balance==0)legal[i]=true;
    	}
    	bool flipped=false,ok=true;
    	for(ll i=n-1;i>=0;i--){
    		char cur=a[i];
    		if(flipped){
    			cur=(cur=='0')?'1':'0';
    		}
    		if(cur!=b[i]){
    			if(!legal[i]){
    				ok=false;
    				break;
    			}
    		flipped=!flipped;
    		}
    	}
    	if(ok)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    }
}