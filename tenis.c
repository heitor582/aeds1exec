#include <stdio.h>
int main(){
    char p[6];
    int sum;
    
    for(int i = 0; i < 6; i++) {
        scanf(" %c", &p[i]);
        if (p[i] == 'V') {
            sum++;
        }
    }
    
    if(sum == 1 || sum == 2) {
         printf("%d", 3);
    } else if (sum == 3 || sum == 4) {
         printf("%d", 2);
    } else if (sum == 5 || sum == 6) {
        printf("%d", 1);
    } else {
        printf("%d", -1);
    }
    
    return 0;
}
