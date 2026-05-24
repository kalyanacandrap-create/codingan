#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int i;
    int sum = 0;
    float average;

    for (i = 0; i < 5; i++) {
        cout << "Masukkan Nilai ke " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "Data Array : ";
    for (i = 0; i < 5; i++) {
        cout << arr[i];
        if (i < 4) cout << ", ";
        sum += arr[i];
    }
    cout << endl;

    average = static_cast<float>(sum) / 5;
    cout << "Nilai rata-rata : " << average << endl;

    cout << "\n// Program dibuat oleh kalyanacandra" << endl;
    return 0;
}
