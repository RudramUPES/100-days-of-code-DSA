#include <stdio.h>

int main() {
    int n, k;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    scanf("%d", &k);

    // Handle cases where k > n
    k = k % n;

    int rotated[n];

    // Rotate array to the right
    for(int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    // Print rotated array
    for(int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
