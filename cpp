#include <iostream>
using namespace std;

int main() {
    float alas, tinggi, panjang, lebar;
    float luasSegitiga, luasPersegiPanjang;

    // Input segitiga
    cout << "=== Luas Segitiga ===" << endl;
    cout << "Masukkan alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    luasSegitiga = 0.5 * alas * tinggi;

    // Input persegi panjang
    cout << "\n=== Luas Persegi Panjang ===" << endl;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    luasPersegiPanjang = panjang * lebar;

    // Output hasil
    cout << "\nHasil Perhitungan:" << endl;
    cout << "Luas segitiga = " << luasSegitiga << endl;
    cout << "Luas persegi panjang = " << luasPersegiPanjang << endl;

    return 0;
}
