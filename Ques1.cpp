// A college is organizing a programming competition. Each participant receives a unique seat number from 0 to n. However, one seat number is missing from the registration list. You are given an array containing n distinct numbers from the range 0 to n. Find and return the missing number.
#include <iostream>
using namespace std;

int main() {
    int nums[] = {3, 0, 1};
    int n = 3;
    int expected = n * (n + 1) / 2;
    int actual = 0;
    for (int i = 0; i < n; i++) {
        actual += nums[i];
    }
    cout << expected - actual;
    return 0;
}