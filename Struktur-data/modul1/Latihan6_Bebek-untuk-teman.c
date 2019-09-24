#include <stdio.h>

int main(){
int banyakbebek;
int banyakteman;
int hasilbagi;
int sisabagi;

printf("Bebek Untuk Teman\n");
printf("-----------------------\n");
//printf("Masukan jumlah bebek : ");
scanf("%i", &banyakbebek);
//printf("Masukkan jumlah teman : ");
scanf("%i", &banyakteman);

if(banyakbebek>=1 && banyakbebek<=100000){
    if(banyakteman>=1 && banyakteman<=100000){
        hasilbagi = banyakbebek / banyakteman;
        sisabagi = banyakbebek%banyakteman;
        printf("Masing - masing %i \n", hasilbagi);
        printf("Bersisa %i\n", sisabagi);
    } else {
        printf("nilai yang anda masukkan melebihi batas\n");
    }
} else {
    printf("nilai yang anda masukkan melebihi batas\n");
}

return 0;
}
