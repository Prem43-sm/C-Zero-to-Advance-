#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    bool isPalindrome = true;

    cout << "Enter one word: ";
    cin >> text;

    int left = 0;
    int right = static_cast<int>(text.length()) - 1;

    while (left < right) {
        if (text[left] != text[right]) {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }

    return 0;
}
