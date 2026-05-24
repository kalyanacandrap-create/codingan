#include <iostream>
using namespace std;

struct Siswa {
    string nama;
    string kelas;
    string hobi;
    string kampusImpian;
    float nilaiAkhir;
};

void tampilkanData(Siswa siswa[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "----------------------------------------" << endl;
        cout << "Data Siswa ke-" << i + 1 << endl;
        cout << "Nama          : " << siswa[i].nama << endl;
        cout << "Kelas         : " << siswa[i].kelas << endl;
        cout << "Hobi          : " << siswa[i].hobi << endl;
        cout << "Kampus Impian : " << siswa[i].kampusImpian << endl;
        cout << "Nilai Akhir   : " << siswa[i].nilaiAkhir << endl;
    }

    cout << "----------------------------------------" << endl;
}

int main() {
    const int jumlahSiswa = 2;
    Siswa siswa[jumlahSiswa];

    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Masukkan data siswa ke-" << i + 1 << ":" << endl;
        cout << "Nama          : ";
        getline(cin, siswa[i].nama);
        cout << "Kelas         : ";
        getline(cin, siswa[i].kelas);
        cout << "Hobi          : ";
        getline(cin, siswa[i].hobi);
        cout << "Kampus Impian : ";
        getline(cin, siswa[i].kampusImpian);
        cout << "Nilai Akhir   : ";
        cin >> siswa[i].nilaiAkhir;
        cin.ignore();
    }

    cout << endl;
    tampilkanData(siswa, jumlahSiswa);

    cout << "\n// Program dibuat oleh kalyanacandra" << endl;
    return 0;
}
