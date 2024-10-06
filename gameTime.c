#include <stdio.h>

int main(){
    int init, end;
    
    scanf("%d %d", &init, &end);
    
    int time = init >= end ? 24 - init + end : end - init;
    
    printf("O JOGO DUROU %d HORA(S)", time);
    return 0;
}
