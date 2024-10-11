#include <stdio.h>

int main() {
    int n;
    float min=0, max=0.0, sum=0;
    scanf("%d", &n);
    float vector[n];
    
    for(int i = 0; i<n; i++) {
        scanf("%f", &vector[i]);
    }
    min = vector[0];
    for(int i = 0; i<n; i++) {
        sum+=vector[i];
        if(max<vector[i]){
            max = vector[i];
        }
        if(min>vector[i]){
            min = vector[i];
        }
    }
    
    printf("%.1f %.1f %.1f", max, min, sum/n);
    
    return 0;
}
