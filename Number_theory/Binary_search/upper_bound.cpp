#include <bits/stdc++.h>
using namespace std;
// this will return the index of the target in the sorted array
// DISCLAIMER: index of the sorted array not the real array
// And the answer will be zero indexed
int binary_search(int* a, long long size, long long target) {
    long long  start = 0, end = size - 1;
    while (start <= end) {
        long long mid = start + (end-start)/2;
        if (a[mid] == target)
            return mid;
        else if (a[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    int a[9] = {2, 5, 3, 6, 10, 1, 4, 8, 9};
    sort(a, a + 9);
    cout << binary_search(a, 9, 5);
    return 0;
}
