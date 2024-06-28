#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int numElements, sumDifference = 0, maxElement = 0, gcdDifference, index;
    cin >> numElements;
    vector<long long int> elements(numElements);
        for (int i = 0; i < numElements; i++) {
        cin >> elements[i];
        maxElement = max(maxElement, elements[i]);
    }
    
    gcdDifference = maxElement - elements[0];
        for (index = 0; index < numElements; index++) {
        sumDifference += maxElement - elements[index];
        gcdDifference = __gcd(gcdDifference, maxElement - elements[index]);
    }
    
    cout << sumDifference / gcdDifference << " " << gcdDifference;
}
