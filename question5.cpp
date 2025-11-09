#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter any letter: ";
    cin >> ch;

    if (islower(ch))
        cout << "Uppercase is: " << char(toupper(ch));
    else if (isupper(ch))
        cout << "Lowercase is: " << char(tolower(ch));
    return 0;
}
