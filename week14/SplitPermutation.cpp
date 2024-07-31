#include <bits/stdc++.h>
using namespace std;

void generatePermutation(int N) {
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        generatePermutation(N);
    }

    return 0;
}
