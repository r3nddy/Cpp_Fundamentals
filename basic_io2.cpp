#include <iostream>
#include <string>

// getline() digunakan untuk mengambil input berupa satu baris penuh, termasuk spasi.
// Berbeda dengan cin >>, yang berhenti ketika ketemu spasi.

using namespace std;
int main() {
    string nama;
    cout << "Masukkan Nama lengkap: ";
    getline(cin, nama);
    
    cout << "Nama: " << nama; 
    return 0;
}