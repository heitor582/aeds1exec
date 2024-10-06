#include <stdio.h>

int sum(int i, int include) {
    int sum = 0;
    
    for(;i <= include; i++){
        printf("%d ", i);
        sum += i;
    }
    return sum;
}

int main(){
    int m, n;
    
    scanf("%d %d", &m, &n);
    
    int sumValue = m > n ? sum(n,m) : sum(m,n);
    
    printf("Soma = %d", sumValue);
    return 0;
}
