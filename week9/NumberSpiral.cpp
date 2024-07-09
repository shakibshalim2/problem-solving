#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long y, x;
        cin >> y >> x;
        
        long long z = max(y, x);
        long long z2 = z * z;
        long long result;

        if (z % 2 == 0) {
            if (y == z) {
                result = z2 - x + 1;
            } 
            else {
                result = z2 - 2 * z + y + 1;
            }
        } 
        else {
            if (x == z) {
                result = z2 - y + 1;
            } 
            else {
                result = z2 - 2 * z + x + 1;
            }
        }

        cout << result << endl;
    }
}
