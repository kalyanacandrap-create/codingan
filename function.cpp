#include <iostream>
using namespace std;

// Deklarasi Function
int tambah(int a, int b);
int kurang(int a, int b);
void salam(string nama);

// Definisi Function
int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

void salam(string nama) {
    cout << "Halo, " << nama << "!" << endl;
}

int main() {
    int x = 10, y = 5;
    
    cout << "=== Function ===" << endl;
    cout << x << " + " << y << " = " << tambah(x, y) << endl;
    cout << x << " - " << y << " = " << kurang(x, y) << endl;
    
    salam("Budi");
    salam("Ani");
    
    return 0;
}