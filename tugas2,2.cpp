#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    
    cout << "lab dasar" << endl;
    cout << "Input Karakter -> ";
    getline(cin, input);

    cout << "Karakter yang diinput : " << input << endl;

    cout << "Panjang Karakter : " << input.length() << endl;

    string reversed = input;
    reverse(reversed.begin(), reversed.end());
    cout << "Karakter dibalik : " << reversed << endl;

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

    cout << "-------------------------------------------" << endl;

    for (int i = 1; i <= upper.length(); i++) {
        cout << upper.substr(0, i) << endl;
    }

    for (int i = lower.length(); i >= 1; i--) {
        cout << lower.substr(0, i) << endl;
    }

    cout << "Press any key to continue..." << endl;

    cin.get();
    return 0;
}
