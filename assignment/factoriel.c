#include <stdio.h>

int main() {
    int nombre;
    unsigned long long factorielle = 1; // Utilisation de unsigned long long pour gérer de grands nombres

    // Demander à l'utilisateur de saisir un entier
    printf("Entrez un entier positif: ");
    scanf("%d", &nombre);

    // Vérifier si l'entrée est positive
    if (nombre < 0) {
        printf("Veuillez entrer un entier positif.\n");
    } else {
        // Calculer la factorielle
        for (int i = 1; i <= nombre; i++) {
            factorielle *= i;
        }

        // Afficher le résultat
        printf("La factorielle de %d est: %llu\n", nombre, factorielle);
    }

    return 0;
}
