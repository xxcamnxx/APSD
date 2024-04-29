#include <iostream>
#include <sstream>

int hitung_penjumlahan_deret(int n) {
    int total = 0;
    std::stringstream deret;
    for (int i = 1; i <= n; ++i) {
        int bilangan = 2 * i;
        total += bilangan;
        deret << bilangan;
        if (i < n) {
            deret << " + ";
        }
    }
    std::cout << deret.str() << " = ";
    return total;
}

void segitiga_siku(int tinggi) {
    int total = 0;
    for (int i = 1; i <= tinggi; ++i) {
        int hasil = hitung_penjumlahan_deret(i);
        total += hasil;
        std::cout << hasil << std::endl;
    }
    std::cout << "----------" << std::endl;
    std::cout << total << std::endl;
}

int main() {
    int tinggi = 5;
    segitiga_siku(tinggi);
    return 0;
}
