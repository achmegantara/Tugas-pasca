#include <stdio.h>

int main(){
int n;

printf("If Then Else \n");
printf("----------------\n");

printf("Masukkan nilai n : "); scanf("%i", &n);

if(n>=-100000 && n<=100000){
    if(n == 0){
        printf("Bilangan nol");
    } else if(n > 0) {
        printf("Bilangan positif");
    } else {
        printf("Bilangan negatif");
    }
} else {
    printf("Nilai yang anda masukkan melebihi batas");
}

return 0;
}
