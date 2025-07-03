#include <stdio.h>



int main() {

int age, annee_naissance, taille_cm, est_etudiant;
float taille;
char nom[50], initiale;


printf("Informations personnelles :\n");

printf("Nom :");
scanf("%s", nom);

printf("Initiale :");
scanf(" %c", &initiale);

printf("Age :");
scanf("%d", &age);

printf("Taille (en metres) :");
scanf("%f", &taille);

printf("Etes-vous étudiant ? (1 pour Oui, 0 pour Non) : ");
    scanf("%d", &est_etudiant);




annee_naissance = 2025 - age;
taille_cm = (int)(taille * 100);

printf("\nRésultats : \n");
printf("Nom : %s\n", nom);
printf("Initiale : %c\n", initiale);
printf("Age : %d ans\n", age);
printf("Taille : %.2f mètres (%d centimètres)\n", taille, taille_cm);
printf("Année de naissance : %d\n", annee_naissance);
printf("Statut étudiant : %s\n", est_etudiant ? "Oui" : "Non");

    return 0;
}
