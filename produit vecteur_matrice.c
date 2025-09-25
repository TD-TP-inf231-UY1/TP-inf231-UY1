#include <stdio.h>

int main() {
    int n, m;

    // Saisir les dimensions du vecteur et de la matrice
    printf("Entrer la taille du vecteur (n) : ");
    scanf("%d", &n);
    printf("Entrer le nombre de colonnes de la matrice (m) : ");
    scanf("%d", &m);

    // Déclarer le vecteur, la matrice et le résultat
    int V[n];
    int M[n][m];
    int R[m];

    // Saisir les éléments du vecteur
    printf("Entrer les %d elements du vecteur :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &V[i]);
    }

    // Saisir les éléments de la matrice
    printf("Entrer les elements de la matrice %d x %d :\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Initialiser le vecteur résultat
    for (int j = 0; j < m; j++) {
        R[j] = 0;
    }

    // Calculer le produit du vecteur et de la matrice
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            R[j] += V[i] * M[i][j];
        }
    }

    // Afficher le vecteur résultat
    printf("Le vecteur resultat est :\n");
    for (int j = 0; j < m; j++) {
        printf("%d ", R[j]);
    }
    printf("\n");

    return 0;
}