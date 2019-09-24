#include <stdio.h>

int main() {

  int i, j, m, n;
  char matriks[10][10];
  char transpose[10][10];

  printf("Masukkan jumlah baris matriks: ");
  scanf("%d", &m);
  printf("Masukkan jumlah kolom matriks: ");
  scanf("%d", &n);

  if(m>=1 && m<=100){
    if(n>=1 && n<=100){
          printf("Masukkan elemen matriks:\n");
          for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
              scanf("%s", &matriks[i][j]);
            }
          }

          for (i = 0; i < m; i ++){
            for(j = 0; j < n; j++){
              transpose[j][i] = matriks[i][j];
            }
          }

          printf("Hasil transpose matriks:\n");
          for (i = 0; i < n; i ++){
            for(j = 0; j < m; j++){
              printf("%c\t",transpose[i][j]);
            }
            printf("\n");
          }
    } else {
        printf("nilai yang anda masukkan melebihi batas\n");
    }
} else {
    printf("nilai yang anda masukkan melebihi batas\n");
}





  return 0;
}
