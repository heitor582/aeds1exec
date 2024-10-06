#include <stdio.h>

int main(){
    int seconds;
    
    scanf("%d", &seconds);
    
    printf("%02d:%02d:%02d", seconds/3600, seconds%3600/60, seconds%3600%60);

    return 0;
}
