#include <iostream>
using namespace std;

int main() {
    int pilihan, angka;
    
    cout << "=== Menu Looping ===" << endl;
    cout << "1. Looping FOR" << endl;
    cout << "2. Looping WHILE" << endl;
    cout << "Pilih: ";
    cin >> pilihan;
    
    if (pilihan == 1) {
        cout << "\n=== Looping FOR ===" << endl;
        cout << "Masukkan angka: ";
        cin >> angka;
        
        for (int i = 1; i <= angka; i++) {
            cout << "Perulangan ke-" << i << endl;
        }
    } else if (pilihan == 2) {
        cout << "\n=== Looping WHILE ===" << endl;
        cout << "Masukkan angka: ";
        cin >> angka;
        
        int i = 1;
        while (i <= angka) {
            cout << "Perulangan ke-" << i << endl;
            i++;
        }
    }
    
    return 0;
}