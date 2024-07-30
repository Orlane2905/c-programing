#include <stdio.h>

int main() {
    int n, sum = 0;

    // Demander à l'utilisateur de saisir un entier positif
    printf("Entrez un entier positif: ");
    scanf("%d", &n);

    // Vérifier si l'entrée est un entier positif
    if (n <= 0) {
        printf("Veuillez entrer un entier positif.\n");
    } else {
        // Calculer la somme en utilisant une boucle for
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        // Afficher le résultat
        printf("La somme des %d premiers nombres naturels est : %d\n", n, sum);
    }

    return 0;
}