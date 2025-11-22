#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 numbers: ";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    // Row sums
    cout << "Row sums: ";
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++)
            rowSum += arr[i][j];
        cout << rowSum << " ";
    }

    cout << "\nColumn sums: ";
    for(int j = 0; j < 3; j++) {
        int colSum = 0;
        for(int i = 0; i < 3; i++)
            colSum += arr[i][j];
        cout << colSum << " ";
    }

    return 0;
}
