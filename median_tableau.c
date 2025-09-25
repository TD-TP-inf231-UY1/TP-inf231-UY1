#include <stdio.h>
int main() {
 int n, i, j, temp;
 printf("Entrez la taille du tableau : ");
 scanf("%d", &n);
 int tab[n];
 printf("Entrez les elements du tableau :\n");
 for (i = 0; i < n; i++) {
 scanf("%d", &tab[i]);
 }
 for (i = 0; i < n - 1; i++) {
 for (j = i + 1; j < n; j++) {
 if (tab[i] > tab[j]) {
 temp = tab[i];
 tab[i] = tab[j];
 tab[j] = temp;
 }
 }
 }
 double mediane;
 if (n % 2 == 1) {
 mediane = tab[n / 2];
 } else {
 mediane = (tab[n / 2 - 1] + tab[n / 2]) / 2.0;
 }
 printf("La médiane du tableau est : %.2f\n", mediane);
        return 0;
}