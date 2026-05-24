#include <iostream>
using namespace std;

int main() {
    int a = 10;
    
	int& ref = a;
    
    cout << "Nilai a: " << a << endl;
    cout << "Nilai ref: " << ref << endl;
    
    ref = 60; 
    cout << "Setelah ref = 60" << endl;
    cout << "Nilai a: " << a << endl;
    cout << "Nilai ref: " << ref << endl;
    
    return 0;
}
