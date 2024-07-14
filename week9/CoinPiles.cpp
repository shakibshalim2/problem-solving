#include <bits/stdc++.h>
using namespace std;

bool piles(long long a, long long b) {
    if ((a + b) % 3 != 0) {
        return false;
    }
    if (a > 2 * b || b > 2 * a) {
        return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if (piles(a, b)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
}
