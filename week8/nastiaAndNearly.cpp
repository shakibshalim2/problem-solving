#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        ll x, y;
        cin >> x >> y;
        if (y == 1){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            ll s = (x * y * 2);
            ll y = s - x;
            cout << x << " " << y << " " << s << "\n";
        }
    }
}