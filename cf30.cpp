#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, s, x;
        cin >> n >> s >> x;
        
        vector<int> a(n);
        int sum_a = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum_a += a[i];
        }
        if (s >= sum_a && (s - sum_a) % x == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

}