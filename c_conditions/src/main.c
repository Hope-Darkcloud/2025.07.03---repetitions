#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    printf("Partie 1 : Comparaison entre a et b\n");
    if(a>b){
        printf("a est plus grand que b\n");
    }
    else if(a<b){
        printf("a est plus petit que b");
    }else{
        printf("a est égal à b\n");}
    
    int nombre_utilisateur;
    printf("Veuillez entrer un nombre entier:");
    scanf("%d", &nombre_utilisateur);
    
    printf("\nPartie 2 : Test du nombre\n");
    if(nombre_utilisateur>0){
        printf("Le nombre %d est positif\n", nombre_utilisateur);
    }
    else if(nombre_utilisateur<0){
        printf("Le nombre %d est négatif\n", nombre_utilisateur);
    }else{
        printf("Le nombre %d est nul\n", nombre_utilisateur);
    }
    
    printf("\nPartie 3 : Tests supplémentaires\n");
    
    if(nombre_utilisateur % 2 == 0){
        printf("Le nombre %d est pair", nombre_utilisateur);
    }else{
        printf("Le nombre %d est impair", nombre_utilisateur);
    }
    
    if(nombre_utilisateur % 3 == 0){
        printf(" et dividible par 3\n");
    }else{
        printf(" et n'est pas dividible par 3\n");
    }
    
    
    return 0;
}
