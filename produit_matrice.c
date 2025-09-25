#include <stdio.h>

int main() {
    int lignesA, colonnesA, lignesB, colonnesB;
    int i, j, k;

    printf("Entrez le nombre de lignes de A : ");
    scanf("%d", &lignesA);
    printf("Entrez le nombre de colonnes de A : ");
    scanf("%d", &colonnesA);

    printf("Entrez le nombre de lignes de B : ");
    scanf("%d", &lignesB);
    printf("Entrez le nombre de colonnes de B : ");
    scanf("%d", &colonnesB);

    if (colonnesA != lignesB) {
        printf("Produit impossible : colonnes de A ≠ lignes de B.\n");
        return 0;
    }

    int A[lignesA][colonnesA], B[lignesB][colonnesB], C[lignesA][colonnesB];

    printf("Entrez les elements de la matrice A :\n");
    for (i = 0; i < lignesA; i++)
        for (j = 0; j < colonnesA; j++)
            scanf("%d", &A[i][j]);

    printf("Entrez les elements de la matrice B :\n");
    for (i = 0; i < lignesB; i++)
        for (j = 0; j < colonnesB; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < lignesA; i++)
        for (j = 0; j < colonnesB; j++) {
            C[i][j] = 0;
            for (k = 0; k < colonnesA; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("La matrice produit est :\n");
    for (i = 0; i < lignesA; i++) {
        for (j = 0; j < colonnesB; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}