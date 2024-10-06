#include <stdio.h>

int main() {
    int idade = 0, qtdM=0, qtdF=0, idadeF=999, idadeM=0, qtd=0, qtdDL=0;
    
    while(idade >= 0) {
        
        char genre;
        int like;
        scanf("%d", &idade);
        
        if(idade < 0){
            break;
        }
        scanf(" %c", &genre);
        scanf("%d", &like);
            if(like == 0){
                qtdDL++;
            }
            if(genre == 'F' && like==1) {
                qtdF++;
            }
            if(genre == 'M' && like==1) {
                qtdM++;
                if(idadeM < idade) {
                    idadeM = idade;
                }
            }
            if(genre == 'F' && like==0 && idade<idadeF) {
                idadeF = idade;
            }
            qtd++;
        
    }
    
    printf("Masculino: %d\n", qtdM);
    printf("Feminino: %d\n", qtdF);
    printf("%d anos\n", idadeM);
    printf("%d anos\n", idadeF);
    printf("%.2f%%", (qtdDL*100.0)/qtd);
    
    return 0;
}
