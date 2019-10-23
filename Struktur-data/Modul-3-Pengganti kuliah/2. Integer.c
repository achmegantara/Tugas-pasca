#include <stdio.h>

/* Achmad akbar megantara
    05111950010039 */

int main(){
    int a,b;
    double c;
    scanf("%d%d", &a,&b);
    if(b!=0){
        c = (double)a/b;
        printf("%1f",c);
    } else {
        printf("Anda membagi dengan 0 \n");
    }
return 0;
}
