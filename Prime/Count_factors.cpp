#include <bits/stdc++.h>
using namespace std;

int Count_factors(int x) {
    int count = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            count++;
            if (x / i != i) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << Count_factors(n);
    return 0;
}
