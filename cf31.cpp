#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) {
        pos[p[i]] = i;
    }
    
    vector<int> right_max(n + 1);
    right_max[n] = 0;
    for (int i = n - 1; i >= 0; i--) {
        right_max[i] = max(p[i], right_max[i + 1]);
    }
    
    int i = 0;
    while (i < n && p[i] >= right_max[i + 1]) {
        i++;
    }
    
    if (i < n) {
        int j = pos[right_max[i]];
        reverse(p.begin() + i, p.begin() + j + 1);
    }
    
    for (int k = 0; k < n; k++) {
        cout << p[k] << " \n"[k == n - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}