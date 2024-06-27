#include<bits/stdc++.h>
using namespace std;
int main() {
    long long x, y;
    cin >> x >> y;

    if (x == y) {
        cout << "=" << endl;
    } 
    else {
        double log_x = log(x);
        double log_y = log(y);

        double left = y * log_x;
        double right = x * log_y;

        if (left < right) {
            cout << "<" << endl;
        }
        else if (left > right) {
            cout << ">" << endl;
        }
        else {
            cout << "=" << endl;
        }
    }
}
