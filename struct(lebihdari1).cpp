#include <iostream>
#include <string>
using namespace std;

// ========== STRUCT ==========
struct Mahasiswa {
    string nama;
    string nim;
    string jur;
    int usia;
    float ipk;
};

// ========== MAIN PROGRAM ==========
int main() {
    const int MAX = 100;
    Mahasiswa mhs[MAX];
    int n;
    
    cout << "=== PROGRAM DATA MAHASISWA ===" << endl;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;
    
    // INPUT DATA
    cout << "\n--- INPUT DATA ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << (i + 1) << endl;
        cout << "Nama: ";
        cin >> mhs[i].nama;
        cout << "NIM: ";
        cin >> mhs[i].nim;
        cout << "Jurusan: ";
        cin >> mhs[i].jur;
        cout << "Usia: ";
        cin >> mhs[i].usia;
        cout << "IPK: ";
        cin >> mhs[i].ipk;
    }
    
    // TAMPILKAN DATA
    cout << "\n=== DATA MAHASISWA ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nData ke-" << (i + 1) << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Jurusan: " << mhs[i].jur << endl;
        cout << "Usia: " << mhs[i].usia << endl;
        cout << "IPK: " << mhs[i].ipk << endl;
    }
    
    // CARI IPK TERTINGGI
    float maksIPK = mhs[0].ipk;
    string namaIPKTertinggi = mhs[0].nama;
    
    for (int i = 1; i < n; i++) {
        if (mhs[i].ipk > maksIPK) {
            maksIPK = mhs[i].ipk;
            namaIPKTertinggi = mhs[i].nama;
        }
    }
    
    cout << "\nMahasiswa dengan IPK tertinggi: " << namaIPKTertinggi 
         << " (" << maksIPK << ")" << endl;
    
    return 0;
}