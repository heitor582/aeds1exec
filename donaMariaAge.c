#include <stdio.h>
int main(){
    int num, num1[3];
    
    scanf("%d", &num);
    scanf("%d", &num1[0]);
    scanf("%d", &num1[1]);
    
    num1[2] = num - num1[0] - num1[1];
    int result = 0;
    for(int i =0; i<3; i++) {
        if(num1[i] > result) {
            result = num1[i];
        }
    }
    
    printf("%d", result);
    return 0;
}
