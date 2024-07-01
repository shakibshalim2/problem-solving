#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        
        bool blockStartToEnd = (x - 1 <= d && x + d >= n) || (y - 1 <= d && y + d >= m);
        bool blockBothSides = ((n - x) <= d && (m - y) <= d) || (x - 1 <= d && y - 1 <= d);
        
        if (blockStartToEnd || blockBothSides) {
            cout << -1 << endl;
        } 
        else {
            cout << (n - 1) + (m - 1) << endl;
        }
    }
}
