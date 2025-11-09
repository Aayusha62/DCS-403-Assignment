#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    if (isalpha(ch))
        cout << ch << " is a letter.";
    else if (isdigit(ch))
        cout << ch << " is a digit.";
    else if (ispunct(ch))
        cout << ch << " is a special character.";
    else
        cout << ch << " is another type.";
    return 0;
}
