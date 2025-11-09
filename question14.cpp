#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str)
        if (isalpha(c))
            result += c;

    cout << result;
    return 0;
}
