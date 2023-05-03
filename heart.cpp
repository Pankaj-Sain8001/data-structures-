#include <iostream>
using namespace std;

int main() {
    int n = 7;  // size of the pattern
    
    // top part of the pattern
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && (j == 1 || j == n - 2)) ||
                (i == 1 && (j == 0 || j == 2 || j == n - 3 || j == n - 1)) ||
                (i == 2 && (j == 0 || j == 3 || j == n - 4 || j == n - 1)) ||
                (i == 3 && (j == 0 || j == 4 || j == n - 5 || j == n - 1)) ||
                (i == 4 && (j == 0 || j == n - 1)) ||
                (i == 5 && (j == 1 || j == n - 2)) ||
                (i == 6 && (j == 2 || j == n - 3))) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // bottom part of the pattern
    for (int i = n / 2; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == n - 1 && (j > 0 && j < n - 1)) ||
                (i == n - 2 && (j == 1 || j == n - 2)) ||
                (i == n - 3 && (j == 2 || j == n - 3)) ||
                (i == n - 4 && (j == 3 || j == n - 4)) ||
                (i == n - 5 && (j == 4 || j == n - 5)) ||
                (i == n - 6 && (j == n / 2 || j == n / 2 - 1))) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
