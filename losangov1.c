#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            printf(" ");
        }
        for(int l = 0; l<(n-(n-i-1)-1)*2; l++){
            printf("*");
        }
        printf("*");
        for(int k = 0; k<n-i-1; k++){
            printf(" ");
        }
        printf("\n");
    }
    for(int i = n-1; i>0; i--){
        for(int j = 0; j<n-i; j++){
            printf(" ");
        }
        for(int l = 0; l<(n-(n-i)-1)*2; l++){
            printf("*");
        }
        printf("*");
        for(int k = 0; k<n-i; k++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
