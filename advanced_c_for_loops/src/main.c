#include <stdio.h>

int main() {
    int n;
    printf("\n--- Partie 1 : Motifs triangulaires ---\n");
    printf("Entrez un nombre entre 1 et 20 : ");
    scanf("%d", &n);

    // Votre code pour les triangles ici
    printf("\nTriangle rectangle :\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\nTriangle rectangle inversé :\n");
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n--- Partie 2 : Matrice carrée ---\n");
    printf("Matrice %dx%d :\n", n,n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == j){printf("5");
            }else if(i>j){printf("0");
            }else{printf("1");}
        }
        printf("\n");
    }
    
    printf("\n--- Partie 3 : Motif pyramidal ---\n");
    printf("Pyramide de nombres :\n");
    int somme = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            printf(" ");}
        for(int j = 1; j <= i; j++){
            printf("%d", j);
            somme += j;}
        for(int j = i-1; j>=1; j--){
            printf("%d", j);
            somme += j;
        }
        printf("\n");
    }
    
    printf("\nSomme de tous les nombres : %d\n", somme);
    
    
    
    return 0;
}
