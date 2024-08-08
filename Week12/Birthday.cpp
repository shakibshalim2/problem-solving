#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    sort(heights.begin(), heights.end());
    
    vector<int> result(n);
    int left = 0, right = n - 1;
    int index = 0;
    
    while (left <= right) {
        if (index % 2 == 0) {
            result[index++] = heights[left++];
        }
        else {
            result[index++] = heights[right--];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}
