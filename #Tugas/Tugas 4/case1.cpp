#include<iostream>

int main() {
    int sum = 0;
    for(int i = 2; i <= 20; i += 2) {
        sum += i;
    }
    std::cout << "2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20 = " << sum << std::endl;
    return 0;
}