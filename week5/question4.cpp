#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& a, int idx) {
    if (idx == (int)a.size()) return;
    cout << a[idx] << " ";
    printArray(a, idx + 1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) cin >> a[i];
    printArray(a, 0);
    cout << endl;
    return 0;
}
