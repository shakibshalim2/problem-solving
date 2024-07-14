#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> remainder_count;
    long long current_sum = 0;
    int count = 0;

    remainder_count[0] = 1;

    for (int i = 0; i < n; i++) {
        current_sum += a[i];
        
        int remainder = ((current_sum % n) + n) % n;

        if (remainder_count.find(remainder) != remainder_count.end()) {
            count += remainder_count[remainder];
        }

        remainder_count[remainder]++;
    }

    cout << count << endl;
}
