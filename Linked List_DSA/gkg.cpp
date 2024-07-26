#include <iostream>
#include <string>

using namespace std;

string getOriginalString(string input1) {
    int n = input1.size();
    string notPossible = "notpossible";

    // Iterate through the string to find the pattern
    for (int i = 0; i <= n / 2; ++i) {
        string original = input1.substr(0, i);
        string modified = "";

        // Construct the modified string by removing 'i' from the original and concatenating
        for (char c : original) {
            if (c != 'i') {
                modified += c;
            }
        }
        modified += original;

        // Check if the constructed modified string matches the given input1
        if (modified == input1) {
            return original;
        }
    }

    // If no valid original string found, return "notpossible"
    return notPossible;
}

int main() {
    string input1;
    cout << "Enter the modified string: ";
    cin >> input1;

    string result = getOriginalString(input1);
    cout << "Original string: " << result << endl;

    return 0;
}
