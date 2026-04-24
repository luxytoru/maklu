#include <stdio.h>

int main() {
    float alas, tinggi, luas;

    // Input
    printf("Masukkan alas: ");
    scanf("%f", &alas);

    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);

    // Hitung luas
    luas = 0.5 * alas * tinggi;

    // Output
    printf("Luas segitiga adalah: %.2f\n", luas);

    return 0;
}
