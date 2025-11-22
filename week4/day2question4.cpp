#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 numbers: ";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> arr[i][j];

    cout << "Row max values: ";
    for(int i = 0; i < 3; i++) {
        int maxVal = arr[i][0];
        for(int j = 1; j < 3; j++) {
            if(arr[j][j] > maxVal)
                maxVal = arr[i][j];
        }
        cout << maxVal << " ";
    }

    return 0;
}
