#include <stdio.h>

int main() {
    unsigned char compteur = 254;

    printf("Valeur initiale: %d\n", compteur);
compteur = compteur + 1;
 
printf("Après incrémentation: %d\n", compteur);

    compteur = compteur + 1;
    
printf("Après seconde incrémentation: %d\n", compteur);
    
    signed char nombre = 127;

      printf("Valeur maximale d'un signed char: %d\n", nombre);
    nombre = nombre + 1;
    
    printf("Après incrémentation: %d\n", nombre);
      // Incrémentez et affichez la valeur


      signed char nombre_negatif = -128;

      printf("Valeur minimale d'un signed char: %d\n", nombre_negatif);
    
    nombre_negatif = nombre_negatif - 1;
    
    printf("Après décrémentation: %d\n", nombre_negatif);

    return 0;
}
