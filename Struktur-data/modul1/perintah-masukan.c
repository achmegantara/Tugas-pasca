#include <stdio.h>

int main(){
    int panjang, lebar, luas;

    printf("Menghitung Luas Persegi Panjang \n");
    printf("Masukkan Panjang \t : "); scanf("%d", &panjang);
    printf("Masukkan Lebar \t\t : "); scanf("%d", &lebar);

    printf("Luas persegi panjang dengan lebar %d dan panjang %d adalah %d \n", lebar, panjang, lebar*panjang);

    return 0;
}
