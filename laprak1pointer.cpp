#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    
    cout << "Nilai a: " << a << endl;
    cout << "Alamat a: " << &a << endl;
    cout << "Nilai ptr (alamat): " << ptr << endl;       
    cout << "Nilai yang di pointer: " << *ptr << endl;
    
    *ptr = 30;
    cout << "Setelah *ptr = 30:" << endl;
    cout << "Nilai a: " << a << endl;
    cout << "Nilai *ptr: " << *ptr << endl;
    
    return 0;
}
