#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vector[2*n];
    
    for(int i = 0; i<2*n; i++) {
        scanf("%d", &vector[i]);
    }
    
    for(int j = 1; j<=n; j++){
        int test = 0;
        for(int i = 0; i<2*n; i++) {
            test = j == vector[i] ? test || 1 : test || 0;
        }
        if(test == 0){
            printf("0");
            return 0;
        }
    }
    
    printf("1");
    return 0;
}
