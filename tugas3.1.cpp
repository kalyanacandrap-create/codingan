#include <stdio.h>

int luasPersegi(int panjang, int lebar) {
    return panjang * lebar;
}

int kelilingPersegi(int panjang, int lebar) {
    return 2 * (panjang + lebar);
}

int main() {
    int p, l;
    
    printf("Masukkan panjang: ");
    scanf("%d", &p);
    printf("Masukkan lebar: ");
    scanf("%d", &l);
    
    printf("\nLuas persegi panjang: %d\n", luasPersegi(p, l));
    printf("Keliling persegi panjang: %d\n", kelilingPersegi(p, l));
    
    return 0;
}
