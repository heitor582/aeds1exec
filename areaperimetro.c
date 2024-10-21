#include<stdio.h>
int main() {
    int raio;
    float pi  = 3.14159;

    scanf("%d", &raio);

    printf("%.2f ", pi * raio * raio);
    printf("%.2f", 2 * pi * raio);

    return 0;
}
