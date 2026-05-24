#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;

    cout << "Input Karakter -> ";
    getline(cin, input);

    cout << "Karakter yang diinput : " << input << endl;

    cout << "Panjang Karakter : " << input.length() << endl;

    string balik = input;
    reverse(balik.begin(), balik.end();
    cout << "Karakter dibalik : " << balik << endl;

    string upper = input;
    for (int i = 0; i < upper.length(); i++) {
        upper[i] = toupper(upper[i]);
    }
    cout << "Karakter diubah ke huruf besar : " << upper << endl;

    string lower = input;
    for (int i = 0; i < lower.length(); i++) {
        lower[i] = tolower(lower[i]);
    }
    cout << "Karakter diubah ke huruf kecil : " << lower << endl;

    cout << endl;

    for (int i = 1; i <= input.length(); i++) {
        cout << input.substr(0, i) << endl;
    }

    for (int i = input.length(); i >= 1; i--) {
        cout << input.substr(0, i) << endl;
    }

    return 0;
}
