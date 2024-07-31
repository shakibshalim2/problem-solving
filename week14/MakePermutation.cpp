#include <bits/stdc++.h>
using namespace std;

bool isPossiblePermutation(vector<int>& A, int N) {
    unordered_set<int> usedNumbers;
    for (int i = 0; i < N; ++i) {
        for (int B = 0; B <= N; ++B) {
            int C = A[i] + B;
            if (C >= 1 && C <= N && usedNumbers.find(C) == usedNumbers.end()) {
                usedNumbers.insert(C);
                break;
            }
        }
    }
    return usedNumbers.size() == N;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        if (isPossiblePermutation(A, N)) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
}
