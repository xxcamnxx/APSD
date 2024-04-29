#include <iostream>
using namespace std;

int main() {
    int hasil = 1;
    for (int i = 1; i <= 9; i += 2) {
        hasil *= i;
        cout << "1 * ";
        for (int j = 3; j <= i; j += 2) {
            cout << j << " * ";
        }
        cout << " = " << hasil << endl;
    }

    return 0;
}