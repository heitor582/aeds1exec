#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vector[2*n];
    
    for(int i = 0; i<2*n; i++) {
        scanf("%d", &vector[i]);
    }
    
    int aux[n];
    
    for(int i =0; i<n;i++){
        aux[i]=-1;
    }
    
    for(int i = 0; i<2*n; i++){
        aux[vector[i]-1] = vector[i];
        int test = 0;
        for(int j=0; j<n; j++){
            if(aux[j] != -1){
                test++;
            }
        }
        if(test == n){
            printf("%d", i+1);
            return 0;
        }
    }
    printf("0");
    return 0;
}
