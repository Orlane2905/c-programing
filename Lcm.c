#include <stdio.h>

// Fonction pour calculer le PGCD en utilisant l'algorithme d'Euclide
int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Demander à l'utilisateur de saisir deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);

    printf("Entrez le deuxième nombre : ");
    scanf("%d", &num2);

    // Calculer le PGCD des deux nombres
    int resultat = pgcd(num1, num2);

    // Afficher le résultat
    printf("Le PGCD de %d et %d est %d\n", num1, num2, resultat);

    return 0;
}
