#include <stdio.h>

int main() {
    int n, i;
    long produit = 1;

    printf("Entrez la taille du vecteur : ");
    scanf("%d", &n);

    int V[n];

    printf("Entrez les elements du vecteur :\n");
    for(i=0; i<n; i++)
        scanf("%d", &V[i]);

    for(i=0; i<n; i++)
        produit *= V[i];

    printf("Le produit de tous les elements du vecteur est : %ld\n", produit);
    return 0;
}