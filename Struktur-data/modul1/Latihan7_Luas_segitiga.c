#include <stdio.h>

int main(){
float alas;
float tinggi;
float luas;

printf("Luas Segitiga\n");
printf("----------------\n");

//printf("Masukkan panjang alas : "); scanf("%f", &alas);
//printf("Masukkan tinggi segitiga : "); scanf("%f", &tinggi);

scanf("%f", &alas); scanf("%f", &tinggi);

if(alas>=1 && alas<=1000){
    if(tinggi>=1 && tinggi<=1000){
            luas = (alas*tinggi)/2;
            printf("%.2f", luas);
    } else {
        printf("nilai yang anda masukkan melebihi batas\n");
    }
} else {
    printf("nilai yang anda masukkan melebihi batas\n");
}


return 0;
}
