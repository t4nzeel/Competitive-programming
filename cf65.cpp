#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n), a(n);
        vector<int> pos(n+1);
        for(int i = 0; i < n; i++){
            cin >> p[i];
            pos[p[i]] = i;
        }
        for(int i = 0; i < n; i++)
            cin >> a[i];
        bool possible = true;
        for(int i = 0; i < n-1; i++){
            if(a[i] != a[i+1]){
                if(pos[a[i]] > pos[a[i+1]]){
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}
