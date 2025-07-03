#include <stdio.h>

// Prototypes des fonctions
void dessiner_ligne(int largeur, char symbole);
void dessiner_rectangle(int largeur, int hauteur, char symbole);
void dessiner_carre(int largeur, char symbole);
void dessiner_triangle(int hauteur, char symbole);
void dessiner_rectangle_vide(int largeur, int hauteur, char symbole);
void dessiner_triangle_inverse(int hauteur, char symbole);
void dessiner_carre_vide(int largeur, char symbole);
void dessiner_forme_personnalisee(int largeur, int hauteur, char symbole);

int main() {
    
    int choix;
    int largeur, hauteur;
    char symbole;

    printf("\n=== BIBLIOTHÈQUE DE FORMES GÉOMÉTRIQUES ===\n");
    printf("1. Ligne\n");
    printf("2. Rectangle plein\n");
    printf("3. Carré plein\n");
    printf("4. Triangle\n");
    printf("5. Rectangle vide\n");
    printf("6. Triangle inversé\n");
    printf("7. Carré vide\n");
    printf("8. Forme personnalisée\n");
    printf("0. Quitter\n");
    

        do {
            printf("Choisissez une forme (0-8) : ");
            scanf("%d", &choix);

            if (choix < 0 || choix > 8)
                printf("⚠️  Entrée invalide. Réessayez.\n");

        } while (choix < 0 || choix > 8);

    if (choix == 1){
        printf("Entrez la longueur : ");
        scanf("%d", &largeur);
        printf("Entrez le symbole : ");
        scanf(" %c", &symbole);
        dessiner_ligne(largeur, symbole);
        printf("\n");
    }
    else if (choix == 2){
        printf("Entrez la largeur : ");
        scanf("%d", &largeur);
        printf("Entrez la hauteur : ");
        scanf("%d", &hauteur);
        printf("Entrez le symbole : ");
        scanf(" %c", &symbole);
        dessiner_rectangle(largeur, hauteur, symbole);
        printf("\n");
    }
    
    else if (choix == 3){
        printf("Entrez la cote : ");
        scanf("%d", &largeur);
        printf("Entrez le symbole : ");
        scanf(" %c", &symbole);
        dessiner_carre(largeur, symbole);
        printf("\n");
    }
    else if (choix == 4){
        printf("Entrez la hauteur : ");
        scanf("%d", &hauteur);
        printf("Entrez le symbole : ");
        scanf(" %c", &symbole);
        dessiner_triangle(hauteur, symbole);
        printf("\n");
    }
    else if (choix == 5){
        printf("Entrez la largeur : ");
        scanf("%d", &largeur);
        printf("Entrez la hauteur : ");
        scanf("%d", &hauteur);
        printf("Entrez le symbole : ");
        scanf(" %c", &symbole);dessiner_rectangle_vide(largeur, hauteur, symbole);
        printf("\n");
    }
    else if (choix == 6){
        printf("Entrez la hauteur : ");
        scanf("%d", &hauteur);
        printf("Entrez le symbole : ");
        scanf(" %c", &symbole);
        dessiner_triangle_inverse(hauteur, symbole);
        printf("\n");
    }
    else if (choix == 7){
        printf("Entrez la cote : ");
        scanf("%d", &largeur);
        printf("Entrez le symbole : ");
        scanf(" %c", &symbole);
        dessiner_carre_vide(largeur, symbole);
        printf("\n");
    }
    else if (choix == 8){
        printf("Entrez la largeur : ");
        scanf("%d", &largeur);
        printf("Entrez la hauteur : ");
        scanf("%d", &hauteur);
        printf("Entrez le symbole : ");
        scanf(" %c", &symbole);
        dessiner_forme_personnalisee(largeur, hauteur, symbole);
        printf("\n");
    }
    else if (choix == 0) {
        printf("Merci d'avoir utilisé la bibliothèque de formes !\n");
    }
    
    return 0;
}

// Définitions des fonctions
void dessiner_ligne(int largeur, char symbole) {
    for(int i = 0; i < largeur; i++){
        putchar(symbole);
    }
}

void dessiner_rectangle(int largeur, int hauteur, char symbole) {
    for(int i= 0; i < hauteur; i++){
        for(int j = 0; j < largeur; j++){
            putchar(symbole);
        } printf("\n");
    }
}

void dessiner_carre(int largeur, char symbole) {
    for(int i= 0; i < largeur; i++){
        dessiner_ligne(largeur, symbole);
        printf("\n");}
    }

void dessiner_triangle(int hauteur, char symbole) {
    for(int i = 0; i < hauteur; i++){
        for(int j = 0; j <= i; j++)
        {putchar(symbole);
        } printf("\n");}
}
void dessiner_rectangle_vide(int largeur, int hauteur, char symbole) {
    for(int i= 0; i < hauteur; i++){
        for(int j = 0; j < largeur; j++){
            if(i  == 0 || i == hauteur -1 || j == 0 || j == largeur -1){
                putchar(symbole);
            }else {printf(" ");}
        }
        printf("\n");
    }
}

void dessiner_triangle_inverse(int hauteur, char symbole){
    for (int i = 0; i < hauteur; i++){
        for (int j = hauteur; j > i; j--){
            putchar(symbole);
        } printf("\n");
    }
}

void dessiner_carre_vide(int largeur, char symbole) {
    for(int i= 0; i < largeur; i++){
        for(int j = 0; j < largeur; j++){
            if(i  == 0 || i == largeur -1 || j == 0 || j == largeur -1){
                putchar(symbole);
            }else {printf(" ");}
        }
        printf("\n");
    }
}
void dessiner_forme_personnalisee(int largeur, int hauteur, char symbole){
    dessiner_triangle(hauteur, symbole);
    dessiner_rectangle_vide(largeur, hauteur, symbole);
}
