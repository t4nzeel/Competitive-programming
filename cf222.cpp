#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll k,x;
    	cin>>k>>x;
    	if(x>=k*k){
    		cout<<2*k-1<<endl;
    		continue;
    	}
    	ll fh=(k*(k+1))/2;
    	if(x<=fh){
    		ll l=1,r=k;
    		while(l<r){
    			ll m=l+(r-l)/2;
    			ll sum=m*(m+1)/2;
    			if(sum>=x)r=m;
    			else l=m+1;
    		}
    		cout<<l<<endl;
    	}
    	else{
    		ll rem=x-fh;
    		ll l=1,r=k-1;
    		while(l<r){
    			ll m=l+(r-l)/2;
    			ll sum=m*(k-1)-m*(m-1)/2;
    			if(sum>=rem)r=m;
    			else l=m+1;
    		}
    		cout<<l+k<<endl;
    	}
    }
}