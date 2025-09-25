#include <stdio.h>

// Fonction pour échanger deux éléments
void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction pour trier un tableau en ordre croissant
void trierTableau(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                echanger(&tab[j], &tab[j + 1]);
            }
        }
    }
}

int main() {
    int n, i, estTrie = 1; // estTrie = 1 signifie vrai au départ

    // Saisir la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    // Déclarer le tableau
    int tab[n];

    // Saisir les éléments du tableau
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Vérifier si le tableau est trié
    for (i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            estTrie = 0;
            break;
        }
    }

    // Afficher le résultat de la vérification
    if (estTrie == 1) {
        printf("Le tableau est déjà trié en ordre croissant.\n");
    } else {
        printf("Le tableau n'est pas trié. Tri en cours...\n");
        trierTableau(tab, n);
        printf("Le tableau a été trié en ordre croissant.\n");
    }

    // Afficher le tableau trié
    printf("Le tableau trié est :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}