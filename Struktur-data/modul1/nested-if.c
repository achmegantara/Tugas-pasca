#include <stdio.h>

int main(){
    int input;
    printf("Masukkan sebuah angka : ");
    scanf("%d", &input);

    printf("Bilangan yang anda masukkan merupakan ");
    if(input==0)
        {
        printf("angka 0");
        } else if (input>0)
            {
                printf("Bilangan ");
                    if(input%2==0)
                        {
                        printf("Genap positif");
                        } else
                            {
                                printf("Ganjil positif");
                            }
}
        else {
            printf("Bilangan ");
            if(input%2==0){
                printf("Genap negatif");
                } else {
                    printf("Ganjil negatif");
                    }

            }
        printf("\n");
        return 0;
}
