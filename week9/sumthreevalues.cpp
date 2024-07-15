#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++) {
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            long long sum = a[i].first + a[j].first + a[k].first;
            if (sum == x) {
                cout << a[i].second << " " << a[j].second << " " << a[k].second << endl;
                return 0;
            } 
            else if (sum < x) {
                j++;
            } 
            else {
                k--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
