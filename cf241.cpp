#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
    	ll n,m;
    	cin>>n>>m;
    	vector<ll>v(n);
    	for(ll &x:v)cin>>x;
    	int tD=0;
   		vector<ll>tZ(n,0);
   		for(ll i=0;i<n;i++){
   			while(v[i]%10==0){
   				tZ[i]++;
   				v[i]/=10;
   				tD++;
   			}
   			while(v[i]>0){
   				tD++;
   				v[i]/=10;
   			}
   		}
   		sort(tZ.begin(),tZ.end(),greater<ll>());
   		for(ll i=0;i<n;i+=2){
   			tD-=tZ[i];
   		}
   		if(tD>m)cout<<"Sasha"<<endl;
   		else cout<<"Anna"<<endl;
    }
}