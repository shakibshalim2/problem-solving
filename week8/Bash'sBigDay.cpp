#include <bits/stdc++.h>
using namespace std;
const int MAX_S = 100000;

int main() {
    int n;
    cin >> n;

    vector<int> strengths(n);
    vector<int> freq(MAX_S + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> strengths[i];
        freq[strengths[i]]++;
    }
    vector<int> multiples_count(MAX_S + 1, 0);
    for (int i = 1; i <= MAX_S; i++) {
        for (int j = i; j <= MAX_S; j += i) {
            multiples_count[i] += freq[j];
        }
    }
    int maxPokemon = 1;
    for (int i = 2; i <= MAX_S; i++) {
        maxPokemon = max(maxPokemon, multiples_count[i]);
    }

    cout << maxPokemon << endl;

}
