#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = "";
    int count = 1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i+1])
            count++;
        else {
            result += s[i];
            result += to_string(count);
            count = 1;
        }
    }

    cout << result;
    return 0;
}
