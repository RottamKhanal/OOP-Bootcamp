#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            cout << str << " is not a palindrome." << endl;
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    cin.ignore(); // Clear newline from input buffer
    cout << "Enter " << n << " words:\n";
    string line;
    getline(cin, line);
    stringstream ss(line);
    string word;
    int count = 0;
    while (ss >> word && count < n) {
        if (isPalindrome(word)) {
            cout << word << " is a palindrome." << endl;
        }
        count++;
    }
    return 0;
}