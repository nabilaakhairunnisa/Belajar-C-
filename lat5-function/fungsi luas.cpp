#include <iostream>

double luasPersegi(double sisi) {
    return sisi * sisi;
}

double luasLingkaran(double r) {
    const double PI = 3.14;
    return PI * r * r;
}

int main() {
    std::cout << "Luas persegi adalah " << luasPersegi(5) << std::endl;
    std::cout << "Luas lingkaran adalah " << luasLingkaran(3) << std::endl;
    return 0;
}

