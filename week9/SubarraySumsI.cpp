#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<long long, int> prefix_sum_count;
    long long current_sum = 0;
    int count = 0;

    prefix_sum_count[0] = 1;

    for (int i = 0; i < n; i++) {
        current_sum += a[i];

        if (prefix_sum_count.find(current_sum - x) != prefix_sum_count.end()) {
            count += prefix_sum_count[current_sum - x];
        }

        prefix_sum_count[current_sum]++;
    }

    cout << count << endl;
    
}
