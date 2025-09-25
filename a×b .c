#include <stdio.h>

int main() {
    int a, b, i, produit = 0;

    printf("Entrez a (positif) : ");
    scanf("%d", &a);

    printf("Entrez b (positif) : ");
    scanf("%d", &b);


    for (i = 1; i <= b; i++) {
        produit = produit + a;
    }

    printf("%d * %d = %d\n", a, b, produit);

    return 0;
}