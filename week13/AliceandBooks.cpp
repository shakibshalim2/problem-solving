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
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int pageA = a.back();
        int pageB = *max_element(a.begin(), a.end() - 1);
        int res = pageA + pageB;

        cout << res << endl;
    }

}
