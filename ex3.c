#include <stdio.h>

int main() {
    int nbrelm, somme = 0;

    printf("tapez le nombre des elements dans le tableau: ");
    scanf("%d", &nbrelm);

    int tableau[nbrelm];

    for(int i = 0; i < nbrelm; i++) {
        printf("Entrez lelement %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for(int i = 0; i < nbrelm; i++) {
        somme += tableau[i];

    printf("La somme des elements du tableau est: %d\n", somme);
    }
    return 0;
}
