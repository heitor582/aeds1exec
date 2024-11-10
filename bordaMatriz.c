#include<stdio.h>
#include<stdlib.h>


int** preencherMatriz(int l, int c) {
    int **matriz = (int **)malloc(l*sizeof(int*));

    for (int i = 0; i < l; i++) {
        matriz[i] = (int *)malloc(c * sizeof(int));
    }

    for(int i =0; i < l; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &matriz[i][j]);
        }
    }


    return matriz;
}

int sumBorda(int l, int c, int **matriz){
    int sum = 0;
    for(int i =0; i < l; i++){
        for(int j = 0; j < c; j += i==0 || i==l-1?1:c-1){
           sum+=matriz[i][j];
        }
    }
    return sum;
}

int main() {
    int l,c;
    scanf("%d %d", &l,&c);
    int **matriz = preencherMatriz(l,c);
    
    printf("%d", sumBorda(l,c,matriz));

    for (int i = 0; i < l; i++) {
        free(matriz[i]);
    }
    free(matriz);
}
