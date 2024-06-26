#include <bits/stdc++.h>
using namespace std;
bool canErase(const vector<int> &a, int n) {
    for (int i = 0; i < n; i++) {
        bool erase = false;
        for (int j = 1; j <= i + 1; j++) {
            if (a[i] % (j + 1) != 0) {
                erase = true;
                break;
            }
        }
        if (!erase) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (canErase(a, n)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
}
