#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    long long l1 = s.length();
    long long l2 = t.length();
    long long len = l1 + l2;
    long long c = 0;

    if (s[l1 - 1] != t[l2 - 1]) {
        cout << len << "\n";
    } 
    else {
        l1--;
        l2--;
        while (l1 >= 0 && l2 >= 0) {
            if (s[l1] == t[l2]) {
                c++;
                l1--;
                l2--;
            } 
            else {
                break;
            }
        }
        cout << len - (c * 2) << "\n";
    }

}
