#include <stdio.h>

int main(){
int n;

printf("If Then \n");
printf("-----------\n");

printf("Masukkan bilangan N : "); scanf("%i", &n);

if(n>=-100000 && n<=100000){
        if(n >= 0){
        printf("%i", n);
    } else {
        printf(" ");
    }
} else {
    printf("Nilai yang anda masukkan melebihi batas");
}



return 0;
}
