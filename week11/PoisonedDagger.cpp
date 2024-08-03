#include <bits/stdc++.h>
using namespace std;

bool canDealDamage(vector<int>& a, int k, long long h) {
    long long damage = 0;
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        damage += min(k, a[i + 1] - a[i]);
    }
    damage += k;
    return damage >= h;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long h;
        cin >> n >> h;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long left = 1, right = h, answer = h;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (canDealDamage(a, mid, h)) {
                answer = mid;
                right = mid - 1;
            } 
            else {
                left = mid + 1;
            }
        }
        cout << answer << endl;
    }
}
