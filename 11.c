#include <stdio.h>

int main() {
    int n, valremplacer,nouvval;

    printf("Entrez le total des elements dans le tableau : ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Entrez la valeur pour remplacer : ");
    scanf("%d", &valremplacer);

    printf("Entrez la valeur nouvelle : ");
    scanf("%d", &valremplacer);

    for(int i = 0; i < n; i++) {
        if(tableau[i] == valremplacer) {
            tableau[i] = nouvval;
        }
    }

    printf("Tableau apres modification :\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
