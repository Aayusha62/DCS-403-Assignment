#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[26] = {0};
    for (char c : str) {
        c = tolower(c);
        if (isalpha(c))
            freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
        if (freq[i] > 0)
            cout << char(i + 'a') << ":" << freq[i] << "  ";
    return 0;
}
