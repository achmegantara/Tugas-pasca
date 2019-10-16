#include <stdio.h>

float penjumlahan(float,float);
float pengurangan(float,float);
float perkalian(float,float);
float pembagian(float,float);

int main(){
float nilai1;
float nilai2;
int pilih;

printf("Masukkan angka pertama: "); scanf("%f",&nilai1);
printf("Pilih operasi matematik : \n[1]-Penjumlahan \n[2]-Pengurangan \n[3]-Perkalian \n[4]-Pembagian \n");
do {
    printf("Pilihan (1-4) : ");scanf("%d",&pilih);
} while(pilih <= 0 || pilih > 4);
printf("Masukkan angka kedua: "); scanf("%f",&nilai2);


if(pilih == 1){
    printf("Hasil penjumlahan dari %.2f dan %.2f adalah : %.2f",nilai1,nilai2,penjumlahan(nilai1,nilai2));
} else if (pilih == 2){
    printf("Hasil pengurangan dari %.2f dan %.2f adalah : %.2f",nilai1,nilai2,pengurangan(nilai1,nilai2));
} else if (pilih == 3){
    printf("Hasil perkalian dari %.2f dan %.2f adalah : %.2f",nilai1,nilai2,perkalian(nilai1,nilai2));
} else if (pilih == 4){
    printf("Hasil pembagian dari %.2f dan %.2f adalah : %.2f",nilai1,nilai2,pembagian(nilai1,nilai2));
} else {
    printf("Pilihan yang anda masukkan salah");
}

printf("\n\n");
return 0;
}

float penjumlahan(float nilai_1, float nilai_2){
    return nilai_1+nilai_2;
}

float pengurangan(float nilai_1, float nilai_2){
    return nilai_1-nilai_2;
}

float perkalian(float nilai_1, float nilai_2){
    return nilai_1*nilai_2;
}

float pembagian(float nilai_1,float nilai_2){
    return nilai_1/nilai_2;
}


