#include <stdio.h>

void findCubes(int *ptr, int n) {
    int i, j;
    printf("\nCubes of all elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int value = *(ptr + i * n + j);   // pointer arithmetic
            printf("%d\t", value * value * value);
        }
        printf("\n");
    }
}

int main() {
    int arr[10][10];
    int n, i, j;

    printf("Enter size of square array (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes(&arr[0][0], n);   // pass base address

    return 0;
}
