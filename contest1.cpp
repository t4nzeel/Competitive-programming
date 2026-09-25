#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        if(s[0]=='1'){
            cout<<count(s.begin(),s.end(),'0')<<endl;
        }else{
            int o=count(s.begin(),s.end(),'1');
            int ans=o,p=0;
            vector<int> z(n+1,0);
            for(int i=n-1;i>=0;i--)
                z[i]=z[i+1]+(s[i]=='0');
            for(int i=0;i<n;i++){
                if(s[i]=='1')
                    ans=min(ans,p+z[i+1]);
                if(s[i]=='1')
                    p++;
            }
            cout<<ans<<endl;
        }
    }
}