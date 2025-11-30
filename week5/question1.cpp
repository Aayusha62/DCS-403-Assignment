#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) {
        return; 
    }
    printNumbers(n - 1); 
    cout << n << " ";    
}

int main() {
    int N;
    cout << "Enter a number: "; 
    cin >> N;
    cout << "Numbers from 1 to " << N << ": ";
    printNumbers(N);
    cout << endl;
    return 0;
}
