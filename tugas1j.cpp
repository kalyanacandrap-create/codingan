#include <iostream>
using namespace std;

int main() {
    int A[3][5] = {0};
    int angka = 1;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            if(i == 0 && j == 2) A[i][j] = angka++;
            else if(i == 1 && j >= 1 && j <= 3) A[i][j] = angka++;
            else if(i == 2) A[i][j] = angka++;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}
