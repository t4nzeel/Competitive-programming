#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,x,y;
        cin >> n>>x>>y;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            if(i%3==0){
                v[i]=0;
            }
            else if(i%3==1){
                v[i]=1;
            }
            else{
                v[i]=2;
            }
        }
        if(n%2==0){
            swap(v[n-1],v[n-2]);
        }
        if(v[x-1]==v[y-1]){
            swap(v[y-3],v[y-2]);
            swap(v[y-2],v[y-1]);
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
