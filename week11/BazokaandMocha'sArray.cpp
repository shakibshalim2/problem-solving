#include <bits/stdc++.h>
using namespace std;

bool canBeSortedByRotation(vector<int>& a) {
    int n = a.size();
    int break_point = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > a[(i + 1) % n]) {
            break_point++;
            if (break_point > 1) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canBeSortedByRotation(a)) {
            cout << "Yes" << endl;
        } 
        else {
            cout << "No" << endl;
        }
    }
}
