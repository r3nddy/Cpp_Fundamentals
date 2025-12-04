#include <iostream>


// int -> 1, -5, 100
// int -> 4 -> 2 milyar
// short -> 2 -> 32
// long int -> 4 atau 8 byte
// long long int -> 8 hingga 16
// unsigned int -> 4 -> 0 hingga 4 milyar

int main() {
    int angka = 100;
    unsigned int angka_positif = 200;
    short angka_kecil = -30;
    long long int angka_besar = 50000;
    std::cout << angka << std::endl;
    std::cout << angka_positif << std::endl;
    std::cout << angka_kecil << std::endl;
    std::cout << angka_besar << std::endl;
    return 0;
}