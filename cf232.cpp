#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,a=0,b=0,c=0;
    	cin>>n;
    	for(ll i=2;i*i<=n;i++){
    		if(n%i==0){
    			a=i;
    			n/=i;
    			break;
    		}
    	}
    	if(a!=0){
    		for(ll i=a+1;i*i<=n;i++){
    			if(n%i==0){
    				b=i;
    				n/=i;
    				break;
    			}
    		}
    	}
    	c=n;
    	if(a==0 || b==0 ||  c==1 ||a==b || a==c || b==c)cout<<"No"<<endl;
    	else{
    		cout<<"Yes"<<endl;
    		cout<<a<<" "<<b<<" "<<c<<endl;
    	}
    }
}