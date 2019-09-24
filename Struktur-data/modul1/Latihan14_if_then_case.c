#include <stdio.h>

int main(){
int n;
char m;

printf("If Then Case \n");
printf("----------------\n");

printf("Masukkan nilai n : "); scanf("%i", &n);

if(n>=1 && n<1000000){
    if (n>=0 && n<10){
        m = 'A';
    } else if(n>=10 && n<100){
        m = 'B';
    } else if(n>=100 && n<1000){
        m = 'C';
    } else if (n>=1000 && n<10000) {
        m = 'D';
    } else if (n>=10000 && n<100000){
        m = 'E';
    } else if (n>=100000 && n<1000000){
        m ='F';
    }

    switch(m){
    case 'A':
        printf("Bilangan satuan");
        break;
    case 'B':
        printf("Bilangan puluhan");
        break;
    case 'C':
        printf("Bilangan ratusan");
        break;
    case 'D':
        printf("Bilangan ribuan");
        break;
    case 'E':
        printf("Bilangan puluhribuan");
        break;
    case 'F':
        printf("Bilangan ratusanribu");
    default:
        break;
    }
} else {
    printf("Nilai yang anda masukkan melebihi batas");
}



return 0;
}
