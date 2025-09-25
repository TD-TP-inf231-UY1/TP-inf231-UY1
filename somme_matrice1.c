#include <stdio.h>

#define N 2
#define M 2

void somme_matrices(int A[N][M], int B[N][M], int C[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[N][M] = {{1, 2}, {3, 4}};
    int B[N][M] = {{5, 6}, {7, 8}};
    int C[N][M];

    somme_matrices(A, B, C);

    printf("Somme des matrices A et B :\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}