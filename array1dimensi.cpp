#include <iostream>
using namespace std;

int main() {
    // Deklarasi array 1 dimensi dengan ukuran tetap
    int nilai[5] = {90, 85, 70, 95, 80};
    
    // Menampilkan data array
    cout << "=== Array 1 Dimensi ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i + 1 << ": " << nilai[i] << endl;
    }
    
    return 0;
}