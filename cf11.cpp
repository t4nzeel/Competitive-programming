/*#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int mex_find(vector<int>&v,int l,int r){
	int mx=*max_element(v.begin()+l,v.begin()+r+1);
	for(int i=0;i<=mx;i++){
		if(find(v.begin()+l, v.begin()+r+1, i) != v.end()) continue;
		if(i==mx) return i+1;
		else return i;
	}
}
int max_mex(vector<int>&v,int k){
	int M=INT_MIN;
	int i=0;
	for(int j=k-1;j<v.size();j++){
		M=max(M,mex_find(v,i,j));
		i++;
	}
	return min(M,k-1);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v;
		v.resize(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		cout<<max_mex(v,k)<<endl;
	}
}*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = min(a[i], n + 1);
        }
        vector<int> freq(n + 6, 0);
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        int mex = 0;
        while (freq[mex] > 0) {
            mex++;
        }
        cout << min(mex, m - 1) << '\n';
    }
    return 0;
}
