#include <bits/stdc++.h>
using namespace std;
//this will return the index of the index of lower bound element 
// it would return the hypothetical next index of the largest element in the array 
// if the target is greater than the largest element
// in this case if the target is 12 output would be 10
// answer will be zero indexed
int binary_search(int* a, long long size, long long target) {
    long long  start = 0, end = size - 1;
    int answer=size;
    while (start <= end) {
        long long mid = start + (end-start)/2;
        if(a[mid]>target)
        {
            answer=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return answer;
}

int main() {
    int a[9] = {2, 3, 6, 10, 1, 4, 8, 9,11};
    sort(a, a + 9);
    cout << binary_search(a, 9, 11);
    return 0;
}
