#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i;
    long long sum = 0;
    long long temp = 0;
    i = 0;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%lld", &temp);
        sum = sum + temp;
    }
    
    printf("%lld", sum);
   
    return 0;
}