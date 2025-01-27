#include "library.c"

int main() {

    int result = power( 2, 3 );
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
    // Exercice 1
        printf(" \t\tEXERCICE 1\n");

    afficherBonjour();

    // Exercice 2
    int n;
    printf("\t\tEXERCICE 2 \n");
    printf("Entrez un nombre a trois chiffres : ");
    scanf("%d", &n);
    printf("L'inverse est : %d\n", inverserNombre(n));

    // Exercice 3

    printf("\t\tEXERCICE 3 \n");
    float reel1, reel2;
    printf("Entrez deux nombres reels : ");
    scanf("%f %f", &reel1, &reel2);
    printf("Le produit est : %.3f\n", multiplierReels(reel1, reel2));

    // Exercice 4
    printf("\t\t EXERCICE 4 \n");
    int p;
    printf("Entrez un nombre pour verifier s'il est pair ou impair : ");
    scanf("%d", &p);
   Test_parite(p);

    // Exercice 5
    printf("\t\tEXERCICE 5 \n");
    int x, y;
    printf("Entrez deux entiers pour les comparer : ");
    scanf("%d %d", &x, &y);
    comparerEntiers(x, y);

    // Exercice 6
    printf("\t\tEXERCICE 6 \n");
    int n1, n2, n3;
    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    trierEntiers(&n1, &n2, &n3);
    printf("Les nombres tries sont : %d %d %d\n", n1, n2, n3);

    // Exercice 16
     printf("\t\t EXERCICE 16 \n");
    char char1, char2;

    printf("Entrez deux caractères : ");
    scanf(" %c %c", &char1, &char2); // Espace avant %c pour consommer les espaces/sauts de ligne précédents

    printf("Avant la permutation :  %c%c\n", char1, char2);

    permuterChars(&char1, &char2);

    printf("Après la permutation : %c%c\n", char1, char2);

    // Exercice 17
     printf("\t\t\EXERCICE 17 \n");
    int num1, num2, Som;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &num1, &num2);

    Som = Somme(num1, num2);

    printf("La somme de %d et %d est : %d\n", num1, num2, Som);


    return 0;
}
