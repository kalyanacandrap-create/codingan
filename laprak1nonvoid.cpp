#include <iostream>
using namespace std;

int kuadrat(int bilangan) {
    return bilangan * bilangan;
}

int main() {
    int angka;
    
    cout << "Masukkan angka: ";
    cin >> angka;
    
    cout << "Kuadrat " << angka << " = " << kuadrat(angka) << endl;
    
    return 0;
}
