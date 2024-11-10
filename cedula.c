#include<stdio.h>

int main() {
    int cem,cq,v,dez,cinco,d,valor,valor2;

    scanf("%d", &valor);
    valor2=valor;
    cem = valor / 100;
    valor-=(cem*100);
    cq = valor / 50;
    valor-=(cq*50);
    v = valor / 20;
    valor-=(v*20);
    dez = valor / 10;
    valor-=(dez*10);
    cinco = valor / 5;
    valor-=(cinco*5);
    d = valor / 2;
    valor-=(d*2);

    printf("%d\n", valor2);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cq);
    printf("%d nota(s) de R$ 20,00\n", v);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", d);
    printf("%d nota(s) de R$ 1,00\n", valor);
    return 0;
}
