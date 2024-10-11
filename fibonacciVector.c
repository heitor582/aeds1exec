#include <stdio.h>

int main() {
    int vector[61];
    vector[0]=0;
    vector[1]=1;
    
    for(int i = 2; i<61; i++){
        vector[i] = vector[i-1] + vector[i-2];
    }

    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        int num;
        scanf("%d", &num);
        printf("Fib(%d) = %d\n", num, vector[num]);
    }
    
    return 0;
}
