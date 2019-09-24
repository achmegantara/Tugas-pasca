#include <stdio.h>
#include <math.h>

int main(){
float n;
float nilaifloor;
float nilaiceil;


printf("Floor dan Ceiling \n");
printf("--------------------- \n");

printf("Masukkan nilai n : "); scanf("%f", &n);

if(n>=-100000 && n<=100000){
    nilaifloor = floor(n);
    nilaiceil = ceil(n);

    printf("nilai floor %.f dan nilai ceil %.f", nilaifloor, nilaiceil);
} else {
    printf("Nilai yang anda masukkan melebihi batas");
}

return 0;
}
