#include <stdio.h>

int main()
{
    char kelas;
    int jumlah_mahasiswa;
    float rasio_mahasiswa;

    kelas = 'A';
    jumlah_mahasiswa = 40;
    rasio_mahasiswa = 30.0 / 40.0;

    printf("Selamat Datang di Modul 1 Dasar Pemrograman \n\n");
    printf("Jumlah mahasiswa DP kelas %c \t\t = %d \n", kelas, jumlah_mahasiswa);
    printf("Rasio mahasiswa putra DP kelas %c \t = %.2f\n", kelas, rasio_mahasiswa);

    return 0;
}
