#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int ans = 0;
        for (int len = 1, b = 0; len <= 9; len++) {
            b = b * 10 + 1;
            for (int m = 1; m <= 9; m++) {
                if (b * m <= n) {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
