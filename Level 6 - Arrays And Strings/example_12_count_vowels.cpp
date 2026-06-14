#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int vowels = 0;

    cout << "Enter text: ";
    getline(cin, text);

    for (int i = 0; i < static_cast<int>(text.length()); i++) {
        char ch = static_cast<char>(tolower(text[i]));

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Vowels: " << vowels << endl;

    return 0;
}
