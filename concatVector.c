#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int vectorA[a], vectorB[b], vector[a+b];
    
    for(int i = 0; i<a; i++) {
        scanf("%d", &vectorA[i]);
    }
    for(int i = 0; i<b; i++) {
        scanf("%d", &vectorB[i]);
    }
    for(int i = 0; i<a; i++) {
        vector[i] = vectorA[i];
         printf("%d ", vector[i]);
    }
    printf("\n");
    for(int i = 0; i<b; i++) {
        vector[i+a] = vectorB[i];
         printf("%d ", vectorB[i]);
    }
    printf("\n");
    for(int i = 0; i<a+b; i++) {
        printf("%d", vector[i]);
        if(i != a+b-1){
            printf(" ");
        }
    }
    
    return 0;
}
