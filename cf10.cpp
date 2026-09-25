#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // If both ends are 0, Bob wins. Otherwise, Alice wins.
        if (a[0] == 0 && a[n - 1] == 0) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }
    
    return 0;
}
