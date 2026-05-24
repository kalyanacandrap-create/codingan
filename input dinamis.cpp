#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Masukkan jumlah data: ";
    cin >> n;
    
    // Array dengan ukuran dinamis (menggunakan pointer)
    int *data = new int[n];
    
    // Input data
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];
    }
    
    // Tampilkan data
    cout << "\n=== Data yang Dimasukkan ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    
    // Hapus memori
    delete[] data;
    
    return 0;
}