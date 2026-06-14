#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter one character: ";
    cin >> ch;

    if (isalpha(ch)) {
        cout << "Alphabet" << endl;
        cout << "Uppercase: " << static_cast<char>(toupper(ch)) << endl;
        cout << "Lowercase: " << static_cast<char>(tolower(ch)) << endl;
    } else if (isdigit(ch)) {
        cout << "Digit" << endl;
    } else if (isspace(ch)) {
        cout << "Space" << endl;
    } else {
        cout << "Other symbol" << endl;
    }

    return 0;
}
