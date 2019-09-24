#include <stdio.h>

int main(){
    char nilai;

    printf("Masukkan nilai DP anda (A/B/C/D/E) : ");
    scanf("%c", &nilai);


    if(nilai=='A'){
            printf("Anda lulus matkul DP dengan nilai A!");
    } else if (nilai=='B') {
            printf("Anda lulus matkul DP dengan nilai B!");
    } else if (nilai=='C') {
            printf("Anda lulus matkul DP dengan nilai C!");
    } else if (nilai=='D') {
            printf("Anda lulus matkul DP dengan nilai D!");
    } else if (nilai=='E') {
            printf("Anda lulus matkul DP dengan nilai E!");
    }

    return 0;
}
