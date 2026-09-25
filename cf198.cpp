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
      ll ans=LLONG_MAX;
      for(char c='a';c<='z';c++){
        ll l=0,r=n-1;
        ll cnt=0;
        while(l<r){
          if(s[l]==s[r]){
            l++;
            r--;
          }
          else if(s[l]==c){
            l++;
            cnt++;
          }
          else if(s[r]==c){
            r--;
            cnt++;
          }
          else{
            cnt=LLONG_MAX;
            break;
          }
        }
        ans=min(ans,cnt);
      }
      if(ans==LLONG_MAX)cout<<-1<<endl;
      else  cout<<ans<<endl;
    }
}