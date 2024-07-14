#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
    }

    int odd_count = 0;
    char odd_char = '\0';
    for (auto &entry : count) {
        if (entry.second % 2 != 0) {
            odd_count++;
            odd_char = entry.first;
        }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string first_half = "", second_half = "";
    for (auto &entry : count) {
        string temp(entry.second / 2, entry.first);
        first_half += temp;
        second_half = temp + second_half;
    }

    if (odd_count == 1) {
        first_half += odd_char;
    }

    cout << first_half + second_half << endl;
}
