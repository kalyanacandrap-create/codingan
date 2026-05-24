#include <iostream>
#include <string>
using namespace std;

// Definisi Struct
struct Mahasiswa {
    string nama;
    string nim;
    int usia;
    float ipk;
};

int main() {
    // Pembuatan object struct
    Mahasiswa mhs1;
    
    // Input data ke struct
    cout << "=== Struct ===" << endl;
    cout << "Nama: ";
    getline(cin, mhs1.nama);
    cout << "NIM: ";
    getline(cin, mhs1.nim);
    cout << "Usia: ";
    cin >> mhs1.usia;
    cout << "IPK: ";
    cin >> mhs1.ipk;
    
    // Tampilkan data dari struct
    cout << "\n=== Data Mahasiswa ===" << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "NIM: " << mhs1.nim << endl;
    cout << "Usia: " << mhs1.usia << endl;
    cout << "IPK: " << mhs1.ipk << endl;
    
    return 0;
}
