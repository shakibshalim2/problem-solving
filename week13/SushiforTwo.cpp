#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sushi(n);
    for (int i = 0; i < n; ++i) {
        cin >> sushi[i];
    }

    int max_len = 0;
    int count1 = 0, count2 = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (sushi[i] == sushi[i + 1]) continue;
        
        count1 = count2 = 0;
        for (int j = i; j >= 0 && sushi[j] == sushi[i]; --j) 
        count1++;
        for (int j = i + 1; j < n && sushi[j] == sushi[i + 1]; ++j) 
        count2++;

        max_len = max(max_len, 2 * min(count1, count2));
    }

    cout << max_len << endl;
}
