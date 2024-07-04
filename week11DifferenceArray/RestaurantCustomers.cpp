#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> e;
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        e.emplace_back(start, 1);
        e.emplace_back(end, -1);
    }

    sort(e.begin(), e.end());

    int cPeople = 0;
    int mPeople = 0;
    for (auto& event : e) {
        cPeople += event.second;
        mPeople = max(mPeople, cPeople);
    }

    cout << mPeople << endl;
}
