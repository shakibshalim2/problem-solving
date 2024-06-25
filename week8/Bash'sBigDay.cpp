#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int maxPokemon = 1;
    for(int g = 2; g <= 100000; g++) {
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] % g == 0) {
                count++;
            }
        }
        maxPokemon = max(maxPokemon, count);
    }
    
    cout << maxPokemon << endl;
}
