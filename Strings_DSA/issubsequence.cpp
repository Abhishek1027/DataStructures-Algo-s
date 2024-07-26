#include <iostream>
#include <string>

bool isSubsequence(const std::string& s, const std::string& t) {
    int i = 0, j = 0;
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }
    return i == s.length();
}

int main() {
    std::string s, t;
    std::cout << "Enter string s: ";
    std::cin >> s;
    std::cout << "Enter string t: ";
    std::cin >> t;

    if (isSubsequence(s, t)) {
        std::cout << "\"" << s << "\" is a subsequence of \"" << t << "\"" << std::endl;
    } else {
        std::cout << "\"" << s << "\" is not a subsequence of \"" << t << "\"" << std::endl;
    }

    return 0;
}
