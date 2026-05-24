#include <iostream>
using namespace std;

int main() {
    // Deklarasi array 2 dimensi (3 baris, 4 kolom)
    int matriks[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };
    
    // Menampilkan data array 2 dimensi
    cout << "=== Array 2 Dimensi ===" << endl;
    for (int baris = 0; baris < 3; baris++) {
        for (int kolom = 0; kolom < 4; kolom++) {
            cout << matriks[baris][kolom] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}