#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";          // border
            else
                cout << " ";          // inside hollow

        }
        cout << endl;
    }

    return 0;
}
