#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*formato de execução de uma matriz de forma manual, sem laço de repetição

  int mat[3][3];

  mat [0][0] = 1;
  mat [0][1] = 2;
  mat [0][2] = 3;

  mat [1][0] = 4;
  mat [1][1] = 5;
  mat [1][2] = 6;

  mat [2][0] = 7;
  mat [2][1] = 8;
  mat [2][2] = 9;

  printf("Imprimindo a primeira linha: \n");
  printf("%d %d %d\n", mat [0][0], mat[0][1], mat[0][2]);


  */

    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j;

    printf("\n\nImprimindo a matriz toda:\n");

    for(i= 0 ; i<3 ; i++){
        for(j = 0; j<3 ; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}


