int main() {
    int n, i, max;

    printf("ecrivez le nombre des elements dans le tableau  : ");
    scanf("%d", &n);

    int tableau[n]; 

    printf("ecrivez %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    max = tableau[0];

    for (i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i]; 
        }
    }

    printf("Le grand element est : %d\n", max);

    return 0;
}
