#include <stdio.h>
int main()
{
    int value=-1, candidato1=0,candidato2=0,candidato3=0,candidato4=0,nulo=0,branco=0;
    while(value != 0){
        scanf("%d", &value);
            switch(value) {
                case 1:
                    candidato1++;
                    break;
                    case 2:
                    candidato2++;
                    break;
                    case 3:
                    candidato3++;
                    break;
                    case 4:
                    candidato4++;
                    break;
                    case 5:
                    nulo++;
                    break;
                    case 6:
                    branco++;
                    break;
                    default: break;
            }
    }
    float percent = branco * 100.0 / (candidato1 + candidato2 + candidato3 + candidato4 + nulo + branco + 1);//nao devia mas tao contando 0 como voto
    printf("Candidato 1: %d voto(s)\n", candidato1);
    printf("Candidato 2: %d voto(s)\n", candidato2);
    printf("Candidato 3: %d voto(s)\n", candidato3);
    printf("Candidato 4: %d voto(s)\n", candidato4);
    printf("Votos nulos: %d\n", nulo);
    printf("Porcentagem de votos em branco: %.2f%%", percent);
    return 0;   
}
