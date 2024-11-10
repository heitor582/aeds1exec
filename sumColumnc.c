#include<stdio.h>
#include<stdlib.h>

int* somarColunaMatriz(int l, int c, int **matriz){
    int *v = (int*)malloc(c*sizeof(int));
    for(int i =0; i < c; i++){
        int sum = 0;
        for(int j = 0; j < l; j++){
            sum+=matriz[j][i];
        }
        v[i]=sum;
    }
    return v;
}

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

int main() {
    int l,c;
    scanf("%d %d", &l,&c);
    int **matriz = preencherMatriz(l,c);
    int *result = somarColunaMatriz(l,c, matriz);

    for(int i = 0; i<c; i++){
        printf("%d", result[i]);
        if(i < c-1){
            printf(" ");
        }
    }
    free(result);
    for (int i = 0; i < l; i++) {
        free(matriz[i]);
    }
    free(matriz);
}
