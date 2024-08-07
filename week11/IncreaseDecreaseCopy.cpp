#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n + 1);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n + 1; i++) {
            cin >> b[i];
        }
        
        long long sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++) {
            sumA += a[i];
        }
        for (int i = 0; i < n + 1; i++) {
            sumB += b[i];
        }
        cout << abs(sumB - sumA) << endl;
    }
}
