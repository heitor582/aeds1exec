#include <stdio.h>
#include <string.h>

void isPalindrome(char* word) {
    int len = strlen(word);
    for(int i = 0; i < len / 2; i++) {
        if(word[i] != word[len - i - 1]) {
            printf("NAO\n");
            return;
        }
    }
    printf("SIM\n");
    return;
}

int main(){
    char word[100];
    while(1) {
        scanf("%99s",word);
        if (strcmp(word, "FIM") == 0){
            break;
        }
        isPalindrome(word);
    }

    return 0;
}
