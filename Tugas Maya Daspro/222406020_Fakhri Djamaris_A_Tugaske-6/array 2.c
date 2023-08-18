#include<stdio.h>

int main()
{
    int nilaiA[2][2],nilaiB[2][2];

    printf("Matriks A\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Matriks A [%d,%d] = ",i,j);
            scanf("%d",&nilaiA[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ", nilaiA[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("Matriks B\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Matriks B [%d,%d] = ",i,j);
            scanf("%d",&nilaiB[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ", nilaiB[i][j]);
        }
        printf("\n");
    }

    printf("\n\nJumlah Matriks A + Matriks B :\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ", nilaiA[i][j]+nilaiB[i][j]);
        }
        printf("\n");
    }
    return 0;
}
