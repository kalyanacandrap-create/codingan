#include <iostream>
using namespace std;

int main() {
    int A[3][5] = {0};
    int isi[] = {3,7,8,9,11,12,13,14,15};
    int k = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            if(i==0 && j<=2) A[i][j] = isi[k++];
            else if(i==1 && j>=1 && j<=3) A[i][j] = isi[k++];
            else if(i==2) A[i][j] = isi[k++];
        }
    }

    for(int i=0; i<3; i++){
        for(int s=0; s<2-i; s++){
            cout << "   "; 
        }

        for(int j=0; j<5; j++){
            if(A[i][j] != 0){
                if(A[i][j] < 10)
                    cout << " " << A[i][j] << " ";
                else
                    cout << A[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
