#include <stdio.h>

int main(){
int x1,x2,y1,y2;
int jarak;

printf("Jarak Manhattan \n");
printf("-------------------\n");

printf("Masukkaan nilai koordinat x1 : "); scanf("%i", &x1);
printf("Masukkan nilai koordinat y1 : "); scanf("%i", &y1);
printf("Masukkan nilai koordinat x2 : "); scanf("%i", &x2);
printf("Masukkan nilai koordinat y2 : "); scanf("%i", &y2);

if(x1>=-100000 && x1<=100000){
        if(x2>=-100000 && x2<=100000){
            if(y1>=-100000 && y1<=100000){
                if(y2>=-100000 && y2<=100000){
                        jarak = abs((x2-x1) + (y2-y1));
                        printf("Maka jarak manhattan adalah %i ", jarak);
                        }else {
                        printf("Nilai yang anda masukkan melebihi batas");
                            }
                        }else {
            printf("Nilai yang anda masukkan melebihi batas");
        }
                }else {
            printf("Nilai yang anda masukkan melebihi batas");
        }
            }else {
                printf("Nilai yang anda masukkan melebihi batas");
            }

return 0;
}
