#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x;
    cin >> x;

    long long a = 1, b = x;

    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            long long j = x / i;
            if (__gcd(i, j) == 1) {
                if (max(i, j) < max(a, b)) {
                    a = i;
                    b = j;
                }
            }
        }
    }

    cout << a << " " << b << endl;
}
