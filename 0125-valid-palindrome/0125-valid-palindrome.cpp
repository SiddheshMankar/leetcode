#include <iostream>
#include <cctype>

class Solution {
public:
    bool isPalindromeRecursive(const std::string& s, int start, int end) {
        // Base case: if start index is greater than or equal to end index
        if (start >= end) {
            return true;
        }
        // If characters at start and end are not the same, return false
        if (s[start] != s[end]) {
            return false;
        }
        // Recursively check the next pair
        return isPalindromeRecursive(s, start + 1, end - 1);
    }

    bool isPalindrome(std::string s) {
        std::string filtered;
        // Filter the string to remove non-alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (std::isalnum(c)) {
                filtered += std::tolower(c);
            }
        }
        // Check if the filtered string is a palindrome
        return isPalindromeRecursive(filtered, 0, filtered.size() - 1);
    }
};
