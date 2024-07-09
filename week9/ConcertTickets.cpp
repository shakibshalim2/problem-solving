#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    vector<int> customers(m);

    for (int i = 0; i < n; i++) {
        int ticket_price;
        cin >> ticket_price;
        tickets.insert(ticket_price);
    }
    for (int i = 0; i < m; i++) {
        cin >> customers[i];
    }
    for (int i = 0; i < m; i++) {
        auto it = tickets.upper_bound(customers[i]);
        if (it == tickets.begin()) {
            cout << -1 << endl;
        } 
        else {
            it--;
            cout << *it << endl;
            tickets.erase(it);
        }
    }
}
