#include <stdio.h>

int main() {
    // Votre code pour la boucle for ici
    printf("--- Partie 1 : Séquence de nombres ---\n");
    for(int i = 1; i <= 10; i++){
        printf("%d\n",i);
    }
    printf("\n--- Partie 2 : Table de multiplication ---\n");
    int nombre;
    int multi = 1;
    printf("Entrez un nombre entre 1 et 20 :");
    scanf("%d", &nombre);
    printf("Table de multiplication de %d :\n", nombre);
    for(int i= 1; i<=10; i++){
        multi = i*nombre;
        printf("%d x %d = %d\n", nombre, i, multi);
    }
    int choix;
    printf("\n--- Partie 3 : Affichage de l'alphabet ---\n");
    printf("Choisissez le format d'affichage de l'alphabet :\n1. Horizontal\n2. Vertical\n3. Par paires\n");
    scanf("%d", &choix);
    printf("Votre choix : %d\n", choix);
    
    if(choix == 1){
        printf("Alphabet en minuscules :\n");
        for(int i = 'a'; i<= 'z'; i++){
            printf("%c", i);
        }
        printf("\nAlphabet en majuscules :\n");
        for(int i = 'A'; i <= 'Z'; i++){
            printf("%c", i);
        }
    }
    if(choix == 2){
        printf("Alphabet en minuscules :\n");
        for(int i = 'a'; i <= 'z'; i++){
            printf("%c\n", i);
        }
        printf("\nAlphabet en majuscules :\n");
        for(int i = 'A'; i <= 'Z'; i++){
            printf("%c\n", i);
        }
    }
    if(choix == 3){
        printf("Alphabet par paires (minuscule-majuscule): \n");
        for(int i = 0; i<26; i++){
            printf("%c-%c ", 'a' + i, 'A' + i);
        }
    }
    
    int puissance, somme;
    printf("\n--- Partie 4 : Calculatrice de puissances ---\n");
    printf("Entrez un nombre de base :\n");
    scanf("%d", &puissance);
    printf("Puissances de %d :\n", puissance);
    for (int i = 1; i <= 10; i++){
        somme *=puissance;
        printf("%d^%d = %d\n", puissance, i, somme);
    }
    return 0;
}
