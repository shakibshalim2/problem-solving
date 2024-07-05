#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> songs(n);

    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    unordered_map<int, int> last_seen;
    int max_length = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        if (last_seen.find(songs[end]) != last_seen.end()) {
            start = max(start, last_seen[songs[end]] + 1);
        }
        last_seen[songs[end]] = end;
        max_length = max(max_length, end - start + 1);
    }

    cout << max_length << endl;
}
