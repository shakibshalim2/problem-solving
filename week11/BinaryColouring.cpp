#include <bits/stdc++.h>
using namespace std;

void solve(int x) {
    vector<int> a;
    while (x != 0) {
        int mod = x % 2;
        if (mod == 1) {
            a.push_back(1);
            x -= 1;
        }
         else if (mod == 0) {
            a.push_back(0);
        } 
        else {
            a.push_back(-1);
            x += 1;
        }
        x /= 2;
    }

    int n = a.size();
    cout << n << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        solve(x);
    }
}
