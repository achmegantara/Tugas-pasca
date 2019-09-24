#include <stdio.h>

int main(){
int n;

printf("If Else Multi \n");
printf("------------------ \n");

printf("Masukkan nilai n : "); scanf("%i", &n);

if(n>=-100000 && n<=100000){
        if(n >= 0){
        if(n%2 == 0){
            printf("%i", n);
        }
    } else {
        printf(" ");
    }
} else {
    printf("Nilai yang anda masukkan melebihi batas");
}



return 0;
}
