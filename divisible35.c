#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num[3];
    
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    
    for(int i = 0; i < 3; i++) {
        if(num[i] % 3 == 0 && num[i] % 5 != 0) {
            printf("Divisível por 3\n");
        } else if(num[i] % 3 != 0 && num[i] % 5 == 0) {
            printf("Divisível por 5\n");
        } else if(num[i] % 3 == 0 && num[i] % 5 == 0) {
            printf("Divisível por ambos\n");
        } else {
            printf("Não é divisível por 3 nem por 5\n");
        }
    }

    return 0;
}
