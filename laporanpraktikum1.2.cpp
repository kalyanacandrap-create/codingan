#include <iostream>
using namespace std;

void watermark() {
    cout << "===========================================" << endl;
    cout << "SIMULASI SISTEM PEMBARUAN SKOR GAME    " << endl;
    cout << "NIM : 202531005    Nama: aditya kalyana candra" << endl;
    cout << "===========================================" << endl << endl;
}

void tambahSkorValue(int skor) {
    skor += 100;
    cout << "  [Pass by Value] Skor sementara: " << skor << endl;
}

void tambahSkorPointer(int* skor) {
    *skor += 100;
    cout << "  [Pass by Pointer] Skor diupdate: " << *skor << endl;
}

void tambahSkorReference(int& skor) {
    skor += 100;
    cout << "  [Pass by Reference] Skor diupdate: " << skor << endl;
}

int main() {
    int skorPlayer = 500;
    
    watermark();
    
    cout << "SKOR AWAL PLAYER: " << skorPlayer << endl << endl;
 
    cout << "1. MENAMBAH SKOR MENGGUNAKAN PASS BY VALUE" << endl;
    tambahSkorValue(skorPlayer);
    cout << "  Skor player setelah fungsi: " << skorPlayer << endl;
 
    cout << "2. MENAMBAH SKOR MENGGUNAKAN POINTER" << endl;
    tambahSkorPointer(&skorPlayer);
    cout << "  Skor player setelah fungsi: " << skorPlayer << endl;
 
    cout << "3. MENAMBAH SKOR MENGGUNAKAN REFERENCE" << endl;
    tambahSkorReference(skorPlayer);
    cout << "  Skor player setelah fungsi: " << skorPlayer << endl;
    
    cout << "SKOR FINAL PLAYER: " << skorPlayer << endl;
    cout << "===========================================" << endl;
    
    return 0;
}
