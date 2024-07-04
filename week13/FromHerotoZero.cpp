#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long res = 0;

        while (n > 0) {
            if (n % k == 0) {
                n /= k;
                res++;
            } 
            else {
                long long rem = n % k;
                res += rem;
                n -= rem;
            }
        }

        cout << res << endl;
    }

    return 0;
}
