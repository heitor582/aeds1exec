#include <stdio.h>
#include <math.h>

int main() {
    int n, sum=0;
    scanf("%d", &n);
    int vector[n];
    
    for(int i = 0; i<n; i++) {
        scanf("%d", &vector[i]);
    }

    for(int i = n-1; i>=0; i--) {
        sum += vector[i] * pow(2, n-1-i);
    }
    
    printf("%d", sum);
    
    return 0;
}
