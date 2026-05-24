#include <iostream>
using namespace std;

int main() {
    int A[3][5] = {0};

    A[0][2] = 3;

    int angka1 = 7;
    for(int j = 1; j <= 3; j++) {
        A[1][j] = angka1++;
    }

    int angka2 = 11;
    for(int j = 0; j < 5; j++) {
        A[2][j] = angka2++;
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}
