#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputkalimat[100];
    int panjang;
    int alpha = 0;
    int nonalpha = 0;
    int countspace = 0;
    int i;

    printf("Masukkan sebuah kalimat : ");
    scanf("%[^\n]s", &inputkalimat);

    panjang = strlen(inputkalimat);

    for(i=0; i<=panjang; i++){
        if(inputkalimat[i] == ' '){
            countspace++;
        }
    }

    for(i=0; i<=panjang; i++){
        if((inputkalimat[i]>='a' && inputkalimat[i]<='z')||(inputkalimat[i]>='A' && inputkalimat[i]<='Z')){
            alpha++;
        } else {
            nonalpha++;
        }
    }

    if((nonalpha-1-countspace)>0){
        printf("anda memasukkan karakter non alphabet");
    } else {
    if(panjang>100){
        printf("Karakter yang anda inputkan terlalu panjang");
    } else {
        printf("%s\n", inputkalimat);
    }
    }

    return 0;
}
