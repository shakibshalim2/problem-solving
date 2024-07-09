#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> songs(n);

    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    unordered_map<int, int> last_occurrence;
    int longest = 0, start = 0;

    for (int i = 0; i < n; i++) {
        if (last_occurrence.find(songs[i]) != last_occurrence.end() && last_occurrence[songs[i]] >= start) {
            start = last_occurrence[songs[i]] + 1;
        }
        last_occurrence[songs[i]] = i;
        longest = max(longest, i - start + 1);
    }

    cout << longest << endl;
}
