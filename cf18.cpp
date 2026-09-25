#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        long long m;
        cin >> n >> m;
        long long px = 0, py = 0;
        long long points = 0;
        while (n--) {
            long long x, y;
            cin >> x >> y;
            long long timeDiff = x - px;
            long long posDiff = llabs(y - py);
            points += timeDiff;
            if ((timeDiff % 2) != (posDiff % 2)) {
                points--;
            }
            px = x;
            py = y;
        }
        points += (m - px);
        cout << points << "\n";
    }
    return 0;
}
