// After a coding contest, a teacher sorts the students' scores to announce the runner-up. Some students may have the same score, so the runner-up must have a score strictly lower than the highest score. Given an integer array scores, return the second-largest distinct value. If a second distinct value does not exist, return -1. Example 1 Input: scores = [8, 3, 5, 8, ]
#include <iostream>
using namespace std;

int main() {
    int scores[] = {8, 3, 5, 8, 6};
    int n = 5;
    int first = -1000000, second = -1000000;
    for (int i = 0; i < n; i++) {
        if (scores[i] > first) {
            second = first;
            first = scores[i];
        } else if (scores[i] < first && scores[i] > second) {
            second = scores[i];
        }
    }
    if (second == -1000000)
        cout << -1;
    else
        cout << second;
    return 0;
}