#include "library.h"
#include <math.h> // Pour la fonction pow() dans inverserNombre
#include <stdlib.h> // Pour la fonction abs() dans trierEntiers
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}


// EXERCICE 1
void afficherBonjour() {
    printf("Bonjour.\n");
}
//EXERCICE 2

int inverserNombre(int n) {
    int inverse = 0;
    inverse += (n % 10) * 100;
    n /= 10;
    inverse += (n % 10) * 10;
    n /= 10;
    inverse += n;
    return inverse;
}
//EXERCICE 4

float multiplierReels(float a, float b) {
    return a * b;
}

   //EXERCICE 5
void Test_parite(int nombre) {
    if (nombre % 2 == 0) {
        printf("%d est est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }
}
   // EXERCICE 6

void comparerEntiers(int a, int b) {
    if (a == b) {
        printf("%d est egale a %d\n",a,b);
    } else if (a > b) {
        printf("%d est superieur a %d\n",a,b);
    } else {
        printf("%d est superieur a %d \n",b,a);
    }
}

void trierEntiers(int *a, int *b, int *c) {
    int temp;
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

//EXERCICE 16
void permuterChars(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int Somme(int w, int z) {
    return w + z;
}
