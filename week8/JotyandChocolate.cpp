#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long cntA = n / a;
    long long cntB = n / b;
    long long cntAB = n / lcm(a, b);
    long long chocolate = cntA * p + cntB * q - cntAB * min(p, q);
    cout << chocolate << endl;
}
