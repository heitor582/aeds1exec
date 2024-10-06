#include <stdio.h>

int main(){
    int codigo1, codigo2, numero1, numero2;
    float preco1, preco2;
    
    scanf("%d %d %f", &codigo1, &numero1, &preco1);
    scanf("%d %d %f", &codigo2, &numero2, &preco2);
    
    printf("VALOR A PAGAR: R$ %.2f", (numero1 * preco1) + (numero2 * preco2));

    return 0;
}
