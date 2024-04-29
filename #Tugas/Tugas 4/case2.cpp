#include<iostream>

int main() {
    int sum = 0;
    for(int i = 1; i <= 19; i += 2) {
        sum += i;
    }
    std::cout << "1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 = " << sum << std::endl;
    return 0;
}