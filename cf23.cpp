#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<int>v(n,-1);
		int mx=0,m=0;
		for (char c : s) {
    		if (c == '1') {
        		m++;
        		mx= max(mx,m);
    	} else {
        	m = 0;
    	}
		}
		if(mx>=k){
			cout<<"No"<<endl;
			continue;
		}
		else{
			cout<<"Yes"<<endl;
			int c=1;
			for(int i=0;i<s.size();i++){
				if(s[i]=='1'){
					v[i]=c;
					c++;
				}
			}
			for(int i=0;i<s.size();i++){
				if(s[i]=='0'){
					v[i]=c;
					c++;
				}
			}
		}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}