#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,k;
    	cin>>n>>k;
    	vector<ll>v(n);
    	for(ll&x:v)cin>>x;
    	bool ans=false;	
    	if(n==1)ans=(v[0]==k);
    	else{
    		sort(v.begin(),v.end());
    		ll i=0,j=1;
    		while(i<n && j<n){
    			if(v[i]+abs(k)==v[j]){
    				ans=true;
    				break;
    			}
    			else if(v[i]+abs(k)<v[j])i++;
    			else j++;
    		}
    	}
    	if(ans)cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    }
}