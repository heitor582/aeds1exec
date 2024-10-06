#include <stdio.h>
int main(){
    double l1,l2,l3;
    
    scanf("%lf %lf %lf", &l1, &l2, &l3);
    
    if(!(l1 + l2 > l3 && l2 + l3 > l1 && l1 + l3 > l2)) {
        printf("Triangulo invalido");
    } else if (l1 == l2 && l2 == l3) {
        printf("Triangulo equilatero");
    } else if(l1 == l2 || l1 == l3 || l2 == l3) {
        printf("Triangulo isosceles");
    } else {
        printf("Triangulo escaleno");
    }
    
    return 0;
}
