// During a college event, students collect points by participating in activities. The organizer wants to find two students whose points add up to a given target. You are given an integer array scores and an integer target. Return the indices of the two elements whose sum equals the target. Exactly one valid answer exists, and you cannot use the same element twice.
#include <iostream>
using namespace std;

int main() {
    int scores[] = {2, 7, 11, 15};
    int n = 4, target = 9;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (scores[i] + scores[j] == target) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    return 0;
}