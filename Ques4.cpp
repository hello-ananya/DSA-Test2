// A teacher creates a short access code from letters. To make it easier to identify, the teacher wants to find the first letter that appears exactly once in the code. Given a string code containing lowercase English letters, return the index of the first character that appears only once. If every character repeats, return -1.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string code = "loveleetcode";
    int count[26] = {0};
    for (int i = 0; i < code.length(); i++) {
        count[code[i] - 'a']++;
    }
    for (int i = 0; i < code.length(); i++) {
        if (count[code[i] - 'a'] == 1) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}