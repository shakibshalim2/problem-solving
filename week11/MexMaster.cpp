#include <bits/stdc++.h>
using namespace std;

int findMinMEX(vector<int>& a) {
    int n = a.size();
    unordered_set<int> sums;

    for (int i = 0; i < n - 1; i++) {
        sums.insert(a[i] + a[i + 1]);
    }

    int mex = 0;
    while (sums.find(mex) != sums.end()) {
        mex++;
    }

    return mex;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int zero_count = count(a.begin(), a.end(), 0);
        int one_count = count(a.begin(), a.end(), 1);

        int result;
        if (zero_count >= 2) {
            result = 1;
        } 
        else if (zero_count == 1 && one_count > 0) {
            result = 1;
        } 
        else {
            result = 0;
        }
        cout << result << endl;
    }
}
