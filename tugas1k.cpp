#include <iostream>
using namespace std;

int main() {
    int A[3][5];
    int angka = 1;

    for(int j = 0; j < 5; j++) {
        for(int i = 0; i < 3; i++) {
            A[i][j] = angka++;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}
