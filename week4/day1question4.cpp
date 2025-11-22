#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> target;

    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            cout << "Found at index " << i;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Not found.";
    }

    return 0;
}
