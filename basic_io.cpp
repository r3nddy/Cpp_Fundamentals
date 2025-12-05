#include <iostream>
#include <string>

// cout digunakan untuk mengirim (output) data ke layar/console.
// cin digunakan untuk menerima (input) data dari keyboard.


int main() {
    std::string nama;
    std::cout << "Masukkan Nama Anda: ";
    std::cin >> nama;
    std::cout << "Nama Anda: " << nama << std::endl;
    return 0;
}