#include <bits/stdc++.h>
using namespace std;
int digitSum(long long n) {
    int s = 0;
    while (n) {
        s += n % 10; 
        n /= 10; 
    }
    return s;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        long long x;
        cin >> x;
        int ans = 0;
        for (int s = 1; s <= 90; ++s) {
            long long y = x + s;
            if (digitSum(y) == s) ++ans;
        }
        cout << ans << '\n';
    }
    return 0;
}
