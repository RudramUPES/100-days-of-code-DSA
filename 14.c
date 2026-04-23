#include <stdio.h>

int main() {
    int n;

    // Read size of square matrix
    scanf("%d", &n);

    int a[n][n];
    int isIdentity = 1;

    // Input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check identity matrix condition
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            
            // Diagonal elements should be 1
            if(i == j && a[i][j] != 1) {
                isIdentity = 0;
                break;
            }
            
            // Non-diagonal elements should be 0
            if(i != j && a[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
        
        if(isIdentity == 0)
            break;
    }

    // Print result
    if(isIdentity)
        printf("Identity Matrix\n");
    else
        printf("Not an Identity Matrix\n");

    return 0;
}
