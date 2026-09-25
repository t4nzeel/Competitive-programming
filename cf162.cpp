#include<bits/stdc++.h>
using namespace  std;
using ll=long long;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>v(n);
		for(ll &x:v)cin>>x;
		sort(v.begin(),v.end());
	    if(v[0]!=1){
	    	cout<<"No"<<endl;
	    	continue;
	    }
	    bool ok=true;
	    ll s=1;
	    for(int i=1;i<n;i++){
	    	if(v[i]>s){
	    		ok=false;
	    		break;
	    	}
	    	s+=v[i];
	    }
	    cout<<(ok ? "Yes" : "No")<<endl;
	}
}