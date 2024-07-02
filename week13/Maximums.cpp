#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    int x = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] += x;
        x = max(x, a[i]);
        cout << a[i] << ' ';
    }

    cout << endl;
    return 0;
}
