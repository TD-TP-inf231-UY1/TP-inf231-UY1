#include <stdio.h>
void inverserTableau(int tableau[], int taille) {
    int temp, i;
    
for (i = 0; i < taille / 2; i++) {
        temp = tableau[i];
        tableau[i] = tableau[taille - i - 1];
        tableau[taille - i - 1] = temp;
    }
}
int main() {
    int tableau[] = {1, 2, 3, 4, 5};  // Déclaration d'un tableau d'exemple
    int taille = sizeof(tableau) / sizeof(tableau[0]);  printf("Tableau avant inversion :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
inverserTableau(tableau, taille);
printf("Tableau après inversion :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}