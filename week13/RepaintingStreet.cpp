#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll mx = INT_MAX;

        for (ll i = 1; i < 101; i++) {
            ll j = 0, cnt = 0;
            
            while (j < n) {
                if (a[j] != i) {
                    j += k;
                    cnt++;
                } 
                else {
                    j++;
                }
            }

            mx = min(mx, cnt);
        }

        cout << mx << endl;
    }

    return 0;
}
