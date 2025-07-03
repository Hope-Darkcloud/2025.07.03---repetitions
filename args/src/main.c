#include <stdio.h>
#include <string.h>
int compter_e(const char *mot){
    int compteur = 0;
    for (int i = 0; mot[i] != '\0'; i++){
        if (mot[i] == 'e' || mot [i] == 'E'){
            compteur++;
        }
    }
    return compteur;
}

int main(int argc, char **argv) {
    if (argc < 2){
        printf("Erreur : Veuillez fournir au moins un mot à analyser.\n");
        printf("Usage : %s <mot1> [mot2] [mot3] ...\n", argv[0]);
        return 1;
    }
        
    int total_lettres = 0;
    int total_e = 0;
    int max_e = 0;
    char *mot_max_e = NULL;
    
    if (argc == 2){
        printf("\n=== ANALYSE D'UN MOT ===\n");
        char *mot = argv[1];
        int lettres = strlen(mot);
        int e_count = compter_e(mot);
        printf("Mot analyseé : \"%s\"\n", mot);
        printf("Nombre de lettres : %d\n", lettres);
        printf("Nombre de 'e' : %d\n", e_count);
    }else{
        printf("=== ANALYSE DE PLUSIEURS MOTS ===\n");
        for (int i = 1; i < argc; i++){
            char *mot = argv[i];
            int lettres = strlen(mot);
            int e_count = compter_e(mot);
            
            printf("%d. \"%s\"\n", i, mot);
            printf("  - Nombre de lettres : %d\n", lettres);
            printf("  - Nombre de 'e' : %d\n", e_count);
            
            total_lettres += lettres;
            total_e += e_count;
            
            if (e_count > max_e) {
                max_e = e_count;
                mot_max_e = mot;
            }
            
        }
        printf("\n=== STATISTIQUES GLOBALES ===\n");
        printf("Nombre total de mots : %d\n", argc - 1);
        printf("Nombre total de lettres : %d\n", total_lettres);
        printf("Nombre total de 'e' : %d\n", total_e);
        if (total_lettres > 0) {
                    float pourcentage = ((float)total_e / total_lettres) * 100;
                    printf("Pourcentage de 'e' : %.0f%%\n", pourcentage);
                }

                if (mot_max_e != NULL) {
                    printf("Mot avec le plus de 'e' : \"%s\" (%d occurrences)\n", mot_max_e, max_e);
                }
            }


    return 0;
}
