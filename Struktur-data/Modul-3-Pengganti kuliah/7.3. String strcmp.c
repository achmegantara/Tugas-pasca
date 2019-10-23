#include <stdio.h>

/* Achmad akbar megantara
    05111950010039 */

int main(){
    char a[] = "halo";
    char b[] = "Hai";
    char c[] = "Halo";
    if(strcmp(a,b) == 0){
        printf("String a sama dengan b \n");
    } else {
        printf("String a tidak sama dengan b\n");
    }
    if(strcmp(a,c) == 0){
        printf("String a sama dengan b \n");
    } else {
        printf("String a tidak sama dengan b\n");
    }
return 0;
}
