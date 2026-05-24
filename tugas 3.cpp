#include <iostream>
using namespace std;

// Fungsi 1: penjumlahan
int tambah(int a, int b) {
    return a + b;
}

// Fungsi 2: perkalian
int kali(int a, int b) {
    return a * b;
}

int main() {
    int x, y;

    cout << "Masukkan angka pertama: ";
    cin >> x;

    cout << "Masukkan angka kedua: ";
    cin >> y;

    cout << "Hasil Penjumlahan: " << tambah(x, y) << endl;
    cout << "Hasil Perkalian: " << kali(x, y) << endl;

    return 0;
}
