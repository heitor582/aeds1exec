#include <stdio.h>

int main(){
    char nome;
    float salario, totalEmVendas;
    
    scanf("%s", &nome);
    scanf("%f", &salario);
    scanf("%f", &totalEmVendas);
    
    float result = (totalEmVendas * 0.15) + salario;
    printf("TOTAL = R$ %.2f", result);

    return 0;
}
