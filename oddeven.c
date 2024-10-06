#include <stdio.h>

int main(){
    while(1) {
        int number;
        scanf("%d", &number);
        if(number == 0) {
            break;
        }
        if(number%2==0) {
            printf("P \n");
        }else {
            printf("I \n");
        }
    }
    
    return 0;
}
