#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;

    cout << "Input Karakter -> ";
    getline(cin, input);

    cout << "Karakter yang diinput : " << input << endl;

    // Panjang karakter
    cout << "Panjang Karakter : " << input.length() << endl;

    // Dibalik
    string balik = input;
    reverse(balik.begin(), balik.end());
    cout << "Karakter dibalik : " << balik << endl;

    // Huruf besar
    string upper = input;
    for (int i = 0; i < upper.length(); i++) {
        upper[i] = toupper(upper[i]);
    }
    cout << "Karakter diubah ke huruf besar : " << upper << endl;

    // Huruf kecil
    string lower = input;
    for (int i = 0; i < lower.length(); i++) {
        lower[i] = tolower(lower[i]);
    }
    cout << "Karakter diubah ke huruf kecil : " << lower << endl;

    cout << endl;

    // Pola bertambah (HURUF BESAR)
    for (int i = 1; i <= input.length(); i++) {
        string temp = input.substr(0, i);
        for (int j = 0; j < temp.length(); j++) {
            temp[j] = toupper(temp[j]);
        }
        cout << temp << endl;
    }

    // Pola berkurang (tetap huruf kecil)
    for (int i = input.length(); i >= 1; i--) {
        cout << input.substr(0, i) << endl;
    }

    return 0;
}
