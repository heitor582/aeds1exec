#include<stdio.h>
int main() {
    int varInt;
    float varFloat;

    scanf("%d", &varInt);
    scanf("%f", &varFloat);

    printf("Decimal: %05d\n", varInt);
    printf("Hexadecimal: %x\n", varInt);
    printf("Octal: %o\n", varInt);
    printf("Char: %c\n", varInt);

    printf("Com 6 casas decimais: %.6f\n", varFloat);
    printf("Com 2 casas decimais: %.2f\n", varFloat);
    printf("Notacao cientifica (lower): %e\n", varFloat);
    printf("Notacao cientifica (upper): %E\n", varFloat);

    return 0;
}
