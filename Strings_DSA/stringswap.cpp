#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool canSwapMakeEqual(const string& s1, const string& s2) {
    // Check if lengths are different
    if (s1.size() != s2.size()) {
        return false;
    }

    // Find positions where s1 and s2 differ
    vector<int> mismatchIndices;
    for (size_t i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) {
            mismatchIndices.push_back(i);
        }
    }

    // If there are exactly two mismatched positions, check for possible swap
    if (mismatchIndices.size() == 2) {
        int i = mismatchIndices[0];
        int j = mismatchIndices[1];
        // Swap characters in s1 or s2 and check if they become equal
        return (s1[i] == s2[j] && s1[j] == s2[i]);
    }

    // If there are no mismatched positions, the strings are already equal
    return mismatchIndices.size() == 0;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    if (canSwapMakeEqual(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

