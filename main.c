#include <stdio.h>

void convertirBase(int value, int targetedbase) {
    int number=value;
    char result[32];
    int index = 0;

    while (number > 0) {
        int rest = number % targetedbase;
        if (rest < 10) {
            result[index] = rest +'0';
        } else {
            result[index] = rest - 10 + 'A';
        }
        number /= targetedbase;
        index++;
    }

    printf("Ce qui équivaut à %d", number);

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    printf(" en base %d.\n",targetedbase);
}

int moyenne;
int average (){

    int notes[]={20,11,13,11,16,9,17} ;
    int sum = 0 ;
    int number0fnotes = sizeof (notes) / sizeof(notes[0]) ;

    for (int i = 0; i < 8; ++i){
        sum += notes[i] ;
    }

    moyenne = (int)sum / number0fnotes ;
    printf("Votre moyenne est de %d en base 10.\n",moyenne);
    return 0;
}


int main() {
    average();
    convertirBase(moyenne,2);
    convertirBase(moyenne,16);
    return 0;
}