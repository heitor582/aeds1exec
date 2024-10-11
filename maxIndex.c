#include <stdio.h>

int main() {
    int n, max=0, index=0;
    scanf("%d", &n);

    int vector[n];
    
    for(int i = 0; i<n; i++) {
        scanf("%d", &vector[i]);
    }
    
    for(int i = 0; i<n; i++) {
        int num = vector[i];
        
        if(max<=num){
            max=num;
            index=i;
        }
    }
    
    printf("%d %d", max,index);
    
    return 0;
}
