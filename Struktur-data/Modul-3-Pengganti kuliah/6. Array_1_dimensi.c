
#include <stdio.h>

/* Achmad akbar megantara
    05111950010039 */

int main(){
  int a[5],i;

    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++){
        printf("Bilangan ke-%d adalah %d\n",i+1,a[i]);
    }

return 0;
}
