#include <stdio.h>

int main() {
    int array[5] = {10,20,30,40,50};
    int somme = 0;
    int maximale = 0;
    float moyenne;
    printf("\n-- Partie 1 : Affichage du tableau --\n");
    for(int i = 0; i < 5; i++){
        printf("Élément %d : %d\n", i, array[i]);
        somme += array[i];
        if (maximale < array[i]){
            maximale = array[i];
        }
            
    }
    
    printf("\n-- Partie 2 : Manipulations sur le tableau --\n");
    printf("Somme : %d\n", somme);
    printf("Valeur maximale : %d\n", maximale);
    moyenne = somme/5;
    printf("Moyenne : %.2f\n", moyenne);
 
    int taille;
    int tableau[20];
    int somme_tableau = 0;
    float moyenne_tableau;
    int count = 0;
    printf("\n-- Partie 3 : Tableau saisi par l'utilisateur·ice ---\n");
    do {
        printf("Entrez la taille du tableau (max 20) :");
        scanf("%d", &taille);
        if (taille < 0 || taille > 20)
            printf("⚠️  Entrée invalide. Réessayez.\n");
    }while(taille < 0 || taille > 20);
    
    for(int i = 0; i < taille; i++){
        printf("Entrez l'élément %d :", i);
        scanf("%d", &tableau[i]);
        somme_tableau += tableau[i];
    }
    
    for (int i = taille - 1; i >= 0; i--){
        printf("Élément %d : %d\n", i, tableau[i]);
    }
    
    moyenne_tableau = somme_tableau/taille;
    printf("Moyenne du tableau : %.2f\n", moyenne_tableau);
    for(int i = 0; i < taille; i++){
        if(tableau[i] > moyenne_tableau){
            count += 1;
        }
    }
    printf("Nombre d'éléments supérieurs à la moyenne : %d\n", count);
    return 0;
}
