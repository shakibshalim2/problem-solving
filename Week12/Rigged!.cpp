#include <bits/stdc++.h>
using namespace std;

bool canPolycarpWin(int w, int polycarp_strength, int polycarp_endurance, vector<pair<int, int>>& athletes) {
    int max_lifts = 0;
    for (auto& athlete : athletes) {
        if (athlete.first >= w) {
            max_lifts = max(max_lifts, athlete.second);
        }
    }
    return polycarp_strength >= w && polycarp_endurance > max_lifts;
}

int findWinningWeight(int polycarp_strength, int polycarp_endurance, vector<pair<int, int>>& athletes) {
    int low = 1, high = polycarp_strength;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canPolycarpWin(mid, polycarp_strength, polycarp_endurance, athletes)) {
            result = mid;
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int polycarp_strength, polycarp_endurance;
        vector<pair<int, int>> athletes;
        
        for (int i = 0; i < n; i++) {
            int si, ei;
            cin >> si >> ei;
            if (i == 0) {
                polycarp_strength = si;
                polycarp_endurance = ei;
            } 
            else {
                athletes.push_back({si, ei});
            }
        }
        cout << findWinningWeight(polycarp_strength, polycarp_endurance, athletes) << endl;
    }
}
