#include <stdio.h>
#include <math.h>

int decimalToBinaryRecursive(int, int);

int main() {
    int n;
    scanf("%d", &n);
    
    int result = decimalToBinaryRecursive(n,0);
    printf("%d", result);
    return 0;
}

int decimalToBinaryRecursive(int n, int p) {
    if(n == 0) {
        return 0;
    }
    return n%10 * pow(2,p) + decimalToBinaryRecursive(n/10, p+1);
}
