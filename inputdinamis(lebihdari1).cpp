#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    
    cout << "=== PROGRAM DATA KARYAWAN ===" << endl;
    cout << "Masukkan jumlah karyawan: ";
    cin >> n;
    
    // ALOKASI MEMORI DINAMIS UNTUK n KARYAWAN
    string *nama = new string[n];
    string *jabatan = new string[n];
    int *gaji = new int[n];
    
    // INPUT DATA
    cout << "\n--- INPUT DATA KARYAWAN ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nKaryawan ke-" << (i + 1) << endl;
        cout << "Nama: ";
        cin >> nama[i];
        cout << "Jabatan: ";
        cin >> jabatan[i];
        cout << "Gaji: ";
        cin >> gaji[i];
    }
    
    // TAMPILKAN DATA
    cout << "\n=== DAFTAR KARYAWAN ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << nama[i] << " (" << jabatan[i] 
             << ") - Rp " << gaji[i] << endl;
    }
    
    // HITUNG TOTAL GAJI
    int totalGaji = 0;
    for (int i = 0; i < n; i++) {
        totalGaji += gaji[i];
    }
    
    cout << "\nTotal Pengeluaran Gaji: Rp " << totalGaji << endl;
    cout << "Rata-rata Gaji: Rp " << (totalGaji / n) << endl;
    
    // BEBASKAN MEMORI
    delete[] nama;
    delete[] jabatan;
    delete[] gaji;
    
    return 0;
}