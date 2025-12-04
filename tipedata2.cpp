#include <iostream>
#include <string>

// char wajib ' ' karena hanya untuk 1 karakter
// " " selalu dianggap string literal, karena di akhir selalu ada null terminator \0

int main() {
    float velocity = 10.4;
    char karakter = 'R';
    bool logic = true; 
    std::string pesan = "Rendy lagi main Valorant";
    std::cout << pesan << std::endl;
    std::cout << "nilai dari variabel logic : " << logic << std::endl;
    return 0;
}