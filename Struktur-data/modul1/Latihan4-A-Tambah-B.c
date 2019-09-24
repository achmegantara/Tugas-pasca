#include <stdio.h>

int main()
{
    int a;
    int b;

    //printf("Masukkan bilangan A : "); scanf("%d", &a);
    //printf("Masukkan bilangan B : "); scanf("%d", &b);
    scanf("%d ", &a);
    scanf("%d", &b);

    if(a>=1 && a<=100){
        if(b >=1 && b <=100){
            printf("%d", a+b);
        } else {
            printf("nilai b melebihi batas");
        }
    } else if (b >=1 && b <=100){
        printf("nilai a melebihi batas");
    } else {
        printf("nilai a dan b melebihi batas");
    }

return 0;
}
