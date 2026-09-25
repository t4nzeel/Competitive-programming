#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
        vector<int> a(n);
        int A = 0, B = 0, C = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= h && a[i] > l) A++;  
            else if (a[i] <= l && a[i] > h) B++;  
            else if (a[i] <= min(h, l)) C++;
        }
        int max_pairs = 0;
        for (int x = 0; x <= C; x++) {
            int rows = A + x;
            int cols = B + (C - x);
            max_pairs = max(max_pairs, min(rows, cols));
        }
        max_pairs = min(max_pairs, n / 2);
        cout << max_pairs << endl;
    }    
    return 0;
}