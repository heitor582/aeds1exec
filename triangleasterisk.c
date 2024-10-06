#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    char *string = (char*)calloc(n, sizeof(char));
    for(int i = 0; i<n; i++) {
        string[i]='*';
    }
    for(int i = 1; i<=n; i++) {
        printf("%.*s\n", i, string);
    }
    free(string);
    return 0;   
}
