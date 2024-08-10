#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<int> result;
    int left = 0, right = n - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(a[left]);
        } 
        else {
            result.push_back(a[left]);
            result.push_back(a[right]);
        }
        left++;
        right--;
    }
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}
