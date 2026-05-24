#include <iostream>
#include <string>
using namespace std;

// ========== FUNCTION ==========

// Tampilkan semua data
void tampilData(string nama[], int nilai[], int n) {
    cout << "\n=== DATA SISWA ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << nama[i] << " - Nilai: " << nilai[i] << endl;
    }
}

// Hitung rata-rata
float hitungRata(int nilai[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += nilai[i];
    }
    return total / (float)n;
}

// Cari nilai tertinggi
string cariTertinggi(string nama[], int nilai[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (nilai[i] > nilai[idx]) {
            idx = i;
        }
    }
    return nama[idx];
}

// Cari nilai terendah
string cariTerendah(string nama[], int nilai[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (nilai[i] < nilai[idx]) {
            idx = i;
        }
    }
    return nama[idx];
}

// ========== MAIN PROGRAM ==========
int main() {
    const int MAX = 100;
    string nama[MAX];
    int nilai[MAX];
    int n;
    
    cout << "=== PROGRAM FUNCTION ===" << endl;
    cout << "Masukkan jumlah siswa: ";
    cin >> n;
    
    // Input data
    for (int i = 0; i < n; i++) {
        cout << "Siswa ke-" << (i + 1) << ": ";
        cout << "Nama: "; cin >> nama[i];
        cout << "Nilai: "; cin >> nilai[i];
    }
    
    // Panggil function
    tampilData(nama, nilai, n);
    
    cout << "\nRata-rata kelas: " << hitungRata(nilai, n) << endl;
    cout << "Siswa tertinggi: " << cariTertinggi(nama, nilai, n) << endl;
    cout << "Siswa terendah: " << cariTerendah(nama, nilai, n) << endl;
    
    return 0;
}