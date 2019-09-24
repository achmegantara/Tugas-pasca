#include <stdio.h>

int main()
{
    char nilai;

    printf("Masukkan nilai DP anda (A/B/C/D/E) : ");
    scanf("%c", &nilai);

    switch(nilai)
    {
    case 'A':
        printf("Anda lulus matkul DP dengan nilai A!");
        break;
    case 'B':
        printf("Anda lulus matkul DP dengan nilai B!");
        break;
    case 'C':
        printf("Anda lulus matkul DP dengan nilai C!");
        break;
    case 'D':
        printf("Anda lulus matkul DP dengan nilai D!");
        break;
    case 'E':
        printf("Anda lulus matkul DP dengan nilai E!");
        break;
    default:
        printf("Nilai tidak terdeteksi!!");
        break;
    }

    printf("\n");
    return 0;

}
