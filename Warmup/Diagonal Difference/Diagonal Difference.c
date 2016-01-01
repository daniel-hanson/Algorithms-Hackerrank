#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compute_diagonal_difference();

int main() {
    printf("%d", compute_diagonal_difference());
    return 0;
}

int compute_diagonal_difference() {
    int diff = 0;
    int n = 0;
    int i = 0;
    int j = 0;
    long long firstDiagonal = 0;
    long long secondDiagonal = 0;
  
    scanf("%d", &n);
    
    int matrix[n][n];
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d ", &matrix[i][j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        firstDiagonal = firstDiagonal + matrix[i][i];
        secondDiagonal = secondDiagonal + matrix[i][n - 1 - i];
    }
    
    diff = firstDiagonal - secondDiagonal;
    
    if(diff < 0) {
        diff = diff * -1;
    }
    
    return diff;
}