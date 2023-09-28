#include <stdio.h>

void convertirBase(int number, int targetedbase) {
    int value = number;
    char result[32];
    int index = 0;

    while (number > 0) {
        int rest = number % targetedbase;
        if (rest < 10) {
            result[index] = rest + '0';
        } else {
            result[index] = rest - 10 + 'A';
        }
        number /= targetedbase;
        index++;
    }

    printf("Le nombre %d en base %d est équivalent à ", value, targetedbase);

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    printf("\n");
}

int main() {
    int nombre,baseCible;
    printf("Entrez un nombre : \n");
    scanf("%d", &nombre);
    getchar();
    printf("Entrez la base cible (2 pour binaire,16 pour hexadécimal) : \n");
    scanf("%d", &baseCible);
    convertirBase(nombre,baseCible);
    return 0;
}