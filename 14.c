#include <stdio.h>

int main() {
    int n; 
    float somme = 0, moyenne; 

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tableau[n]; 

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1); 
        scanf("%d", &tableau[i]); 
        somme += tableau[i]; 
    }

    moyenne = somme / n;

    printf("La moyenne est : %.2f\n", moyenne);

    return 0;
}
