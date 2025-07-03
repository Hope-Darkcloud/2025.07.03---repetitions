#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables
    int int_var = 10;
    float float_var = 3.5;
    char char_var = 'A';
    short short_var = 100;

    // Calculs et affichage des résultats
    printf("\nPARTIE 1: OPÉRATIONS ENTRE TYPES DIFFÉRENTS\n\n");
    printf("int_var + float_var = %.2f (type: float)\n", int_var + float_var);
    printf("int_var * float_var = %.2f (type: float)\n", int_var * float_var);
    printf("int_var + char_var = %d (type: int)\n", int_var + char_var);
    printf("float_var / int_var = %.2f (type: float)\n", float_var / int_var);
    printf("short_var * char_var = %d (type: int)\n", short_var * char_var);
    // Complétez avec les autres opérations...

    printf("\nPARTIE 2: CONVERSIONS EXPLICITES\n");
    printf("int_var + float_var = %.2f (sans cast)\n", int_var + float_var);
    printf("int_var + (int)float_var = %d (avec cast de float_var en int)\n\n", int_var + (int)float_var);
    
    
    printf(" float_var * char_var = %.2f (sans cast)\n", char_var * float_var);
    printf("float_var + (float)char_var = %.2f (avec cast de char_var en float)\n\n", float_var + (float)char_var);
    

    printf("int_var / short_var = %d (division entière)\n", int_var / short_var);
    printf(" (float)int_var / short_var = %.2f (avec cast pour division flottante)\n\n", (float)int_var / short_var);
    
    printf("\nPARTIE 3: DIVISION ENTIÈRE ET MODULO\n");
    int a = 17;
    int b = 5;
    printf("a = %d, b = %d\n", a, b);
    printf("a / b = %d (division entière)\n", a / b);
    printf("(float)a / b = %.2f (division flottante)\n", (float)a / b);
    printf("a %% b = %d (reste de la division)\n\n", a % b);
    
    a = -17;
    b = 5;
    printf("a = %d, b = %d\n", a, b);
    printf("a / b = %d (division entière avec négatif)\n", a / b);
    printf("(float)a / b = %.2f (division flottante avec négatif)\n", (float)a / b);
    printf("a %% b = %d (reste de la division avec négatif)\n\n", a % b);
    
    printf("\nPARTIE 4: CALCULATRICE INTERACTIVE\n");
    int int_input;
    float float_input;

    printf("Entrez un nombre entier : ");
    scanf("%d", &int_input);

    printf("Entrez un nombre à virgule flottante : ");
    scanf("%f", &float_input);
    
    if ((int)float_input == 0){
        printf("Erreur : division ou modulo par zéro non autorisé\n");
    }else{
        
        printf("\nEXEMPLES DE RÉSULTATS DES OPÉRATIONS :\n");
        printf("Addition : %d + %.2f = %.2f (type: float)\n", int_input, float_input, int_input + float_input);
        
        printf("Soustraction : %.2f - %d = %.2f (type: float)\n", float_input, int_input, float_input - int_input);
        
        printf("Multiplication : %d * %.2f = %.2f (type: float)\n", int_input, float_input, int_input * float_input);
        
        printf("Division : %.2f / %d = %.2f (type: float)\n", float_input, int_input, float_input / int_input);
        
        printf("Division : %d / %d = %d (type: int) - La partie décimale est tronquée après conversion\n", int_input, (int)float_input, int_input / (int)float_input);
        printf("Modulo : %d %% %d = %d (type: int) - Le modulo nécessite des opérandes entiers\n", int_input, (int)float_input, int_input % (int)float_input);
    }
    return 0;
}
