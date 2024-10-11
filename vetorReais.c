// Escreva um programa que carregue um vetor com N números reais, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.

// Entrada: Composta por duas linhas. A primeira linha contém um valor inteiro (N) e a segunda linha contém os números reais.

// Saída: única linha contendo a quantidade de negativos e a soma dos positivos, sendo a soma com 1 casa decimal.

#include <stdio.h>

int main() {
    int n, min=0, sum=0;
    scanf("%d", &n);
    int vector[n];
    
    for(int i = 0; i<n; i++) {
        scanf("%d", &vector[i]);
    }
    for(int i = 0; i<n; i++) {
        if(vector[i] >= 0){
            sum+=vector[i];
        } else {
            min++;
        }
    }
    
    printf("%d %d", min, sum);
    
    return 0;
}
