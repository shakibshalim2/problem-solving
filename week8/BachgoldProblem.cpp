#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    if (t % 2 == 1) {
        t = t / 2 - 1;
        cout << t + 1 << endl << 3 << ' ';
    }
    else {
        t /= 2;
        cout << t << endl;
    }

    for (int i = 0; i < t; i++) {
        cout << 2 << ' ';
    }
    cout << endl;
}
