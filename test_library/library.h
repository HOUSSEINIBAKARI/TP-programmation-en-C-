#ifndef SIMPLE_H // Protection contre les inclusions multiples
#define SIMPLE_H
#include <stdio.h>
// D�finition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// D�finition d'une fonction d'�l�vation � une puissance donn�es.
int power( int value, unsigned int pow );
void afficherBonjour();
int inverserNombre(int nombre);
float multiplierReels(float a, float b);
void Test_parite(int nombre);
void comparerEntiers(int a, int b);
void trierEntiers(int *a, int *b, int *c);
//EXERCICE 16
void permuterChars(char *a, char *b);
// EXERCICE 17
int Somme(int a, int b);

#endif
