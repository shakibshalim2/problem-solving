#include <bits/stdc++.h>
using namespace std;
long long merge_and_count(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    long long inv_count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } 
        else {
            temp[k++] = arr[j++];
            inv_count += (mid + 1) - i;
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}

long long merge_sort_and_count(vector<int> &arr, vector<int> &temp, int left, int right) {
    long long inv_count = 0;
    if (left < right) {
        int mid = (left + right) / 2;

        inv_count += merge_sort_and_count(arr, temp, left, mid);
        inv_count += merge_sort_and_count(arr, temp, mid + 1, right);
        inv_count += merge_and_count(arr, temp, left, mid, right);
    }
    return inv_count;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cin.ignore(); 

        long long result = merge_sort_and_count(arr, temp, 0, n - 1);
        cout << result << endl;

        cin.ignore();
    }
}
