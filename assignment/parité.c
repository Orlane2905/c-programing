#include <stdio.h>

int main() {
    int number;

    // Demander à l'utilisateur de saisir un nombre
    printf("Entrez un nombre: ");
    scanf("%d", &number);

    // Vérifier si le nombre est pair ou impair
    if (number % 2 == 0) {
        printf("%d est pair.\n", number);
    } else {
        printf("%d est impair.\n", number);
    }

    return 0;
}
