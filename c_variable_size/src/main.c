#include <stdio.h>
#include <limits.h>

int main() {
    // Exemple pour le type char
    printf("TAILLES DES TYPES DE DONNÉES :\n");
    
    printf("Taille de char : %zu octets\n", sizeof(char));
    printf("Taille de int : %zu octets\n", sizeof(int));
    printf("Taille de float : %zu octets\n", sizeof(float));
    printf("Taille de double : %zu octets\n", sizeof(double));
    printf("Taille de long : %zu octets\n", sizeof(long));
    printf("Taille de long long : %zu octets\n", sizeof(long long));
    printf("Taille de short : %zu octets\n", sizeof(short));
    printf("Taille de unsigned int : %zu octets\n", sizeof(unsigned int));
    
    // Ajoutez le code pour les autres types de données ici
    printf("\nVALEURS LIMITES :\n");
    printf("char : min = %d, max = %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char : min = 0, max = %u\n", UCHAR_MAX);
    printf("int : min = %d, max = %d\n", INT_MIN, INT_MAX);
    printf("unsigned int : min = 0, max = %u\n", UINT_MAX);
    
    unsigned char x = UCHAR_MAX;
    
    printf("\nDÉMONSTRATION DE DÉPASSEMENT :\n");
    printf("Valeur avant incrémentation (unsigned char à max) : %u\n", x);
    x++;
    printf("Valeur après incrémentation : %u\n", x);
    
    return 0;
}
