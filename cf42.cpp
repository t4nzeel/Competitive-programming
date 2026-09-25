/*#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		long long sum=0;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
		}
		while(q--){
			int l,r,x;
			long long k=sum;
			cin>>l>>r>>x;
			for(int i=l-1;i<r;i++){
				k=k-v[i];
			}
			k+=(r-l+1)*x;
			if(k%2!=0) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
}*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<long long> v(n), pref(n + 1, 0);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            pref[i + 1] = pref[i] + v[i];
        }
        long long totalSum = pref[n];
        while(q--){
            long long l, r, x;
            cin >> l >> r >> x;
            long long segmentSum = pref[r] - pref[l - 1];
            long long newSum = totalSum - segmentSum + (r - l + 1) * x;
            if(newSum % 2)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}
