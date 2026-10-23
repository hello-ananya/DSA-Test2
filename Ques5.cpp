//A teacher records the roll numbers of students who submitted their assignments. Due to a mistake, some roll numbers may have been entered more than once. You are given an integer array rollNumbers. Return true if any roll number appears at least twice; otherwise, return false.
#include <iostream>
using namespace std;

int main() {
    int roll[] = {1, 2, 3, 1};
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (roll[i] == roll[j]) {
                cout << "true";
                return 0;
            }
        }
    }
    cout << "false";
    return 0;
}