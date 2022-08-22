#include <stdio.h>
int main() {
    int n, i, j, aux;
    printf("Give the array's size: ");
    scanf("%d", &n);
    int A[n];
    int var;
    int largest_number;
    printf("Fill the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(A[i] > A[j]) {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    printf("Largest number of given array is %d", A[n-1]);
    return 0;
}
