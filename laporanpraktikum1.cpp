#include <iostream>
using namespace std;

void tambahSkorByValue(int skor) {
    skor += 100;
    cout << "  [By Value] Skor diubah menjadi: " << skor << endl;
}

void tambahSkorByPointer(int* skor) {
    *skor += 100;
    cout << "  [By Pointer] Skor diubah menjadi: " << *skor << endl;
}

void tambahSkorByReference(int& skor) {
    skor += 100;
    cout << "  [By Reference] Skor diubah menjadi: " << skor << endl;
}

int main() {
    int skorAwal = 500;
    
    cout << "=== SIMULASI SISTEM PEMBARUAN SKOR PLAYER ===\n";
    cout << "Skor awal player: " << skorAwal << endl << endl;
 
    cout << "1. MENAMBAH SKOR MENGGUNAKAN PASS BY VALUE" << endl;
    cout << "   Skor sebelum: " << skorAwal << endl;
    tambahSkorByValue(skorAwal);
    cout << "   Skor SESUDAH: " << skorAwal << endl << endl;
 
    cout << "2. MENAMBAH SKOR MENGGUNAKAN POINTER" << endl;
    cout << "   Skor sebelum: " << skorAwal << endl;
    tambahSkorByPointer(&skorAwal);
    cout << "   Skor SESUDAH: " << skorAwal << endl << endl;
 
    cout << "3. MENAMBAH SKOR MENGGUNAKAN REFERENCE" << endl;
    cout << "   Skor sebelum: " << skorAwal << endl;
    tambahSkorByReference(skorAwal);
    cout << "   Skor SESUDAH: " << skorAwal << endl << endl;
    
    cout << "SKOR AKHIR PLAYER: " << skorAwal << endl;
    cout << "=======================" << endl;
    
    return 0;
}
