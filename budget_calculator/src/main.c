#include <stdio.h>

int main() {
    float revenu, logement, alimentation, transports, communications, vetements, autres;

    // Collecte des revenus
    printf("== CALCULATRICE DE BUDGET ==\n\n");
    printf("Entrez votre revenu mensuel total (CHF): ");
    scanf("%f", &revenu);

    // Collecte des dépenses
    printf("\n-- Entrez vos dépenses mensuelles --\n");
    printf("Logement (loyer, charges) (CHF): ");
    scanf("%f", &logement);
    printf("Alimentation (courses, repas) (CHF): ");
    scanf("%f", &alimentation);
    printf("Transports (bus, train) (CHF): ");
    scanf("%f", &transports);
    printf("Communications (téléphone, internet) (CHF): ");
    scanf("%f", &communications);
    printf("Vêtements et hygiène (CHF): ");
    scanf("%f", &vetements);
    printf("Autres dépenses (CHF): ");
    scanf("%f", &autres);
    // Ajoutez le code pour collecter les autres catégories de dépenses
    float depenses, solde;
    depenses = logement + alimentation + transports + communications + vetements + autres;
    solde = revenu - depenses;
    printf("\n\n== ANALYSE DE VOTRE BUDGET ==\n\n");
    printf("Revenu total: %.2f CHF\n", revenu);
    printf("Dépenses totales: %.2f CHF\n", depenses);
    printf("Solde restant: %.2f CHF\n", solde);
 
    printf("\n\nRépartition des dépenses:\n\n");
    printf("- Logement: %.2f CHF (%.1f%% de votre revenu)\n", logement, (logement/depenses)*100);
    printf("- Alimentation: %.2f CHF (%.1f%% de votre revenu)\n", alimentation, (alimentation/depenses)*100);
    printf("- Transports: %.2f CHF (%.1f%% de votre revenu)\n", transports, (transports/depenses)*100);
    printf("- Communications: %.2f CHF (%.1f%% de votre revenu)\n", communications, (communications/depenses)*100);
    printf("- Vêtements et hygiène: %.2f CHF (%.1f%% de votre revenu)\n", vetements, (vetements/depenses)*100);
    printf("- Autres: %.2f CHF (%.1f%% de votre revenu)\n", autres, (autres/depenses)*100);

    if (solde >= (revenu*10)/100){
        printf("\nStatut du budget: EXCÉDENTAIRE (solde > 10%% du revenu)\n\n");
    } else if (solde <= 0){
        printf("\nStatut du budget: DÉFICITAIRE (solde < 0)\n\n");
    }else if (solde < (revenu*10)/100){
        printf("\nStatut du budget: TRÈS SERRÉ (solde < 10%% du revenu)\n\n");
    }
    printf("== RECOMMANDATIONS ==\n\n");
    
    
    if(logement > (revenu*40)/100){printf("ATTENTION: Votre loyer est très élevé par rapport à vos revenus (recommandation: max 40%%)\n\n");
    }
    if(alimentation > (revenu*30)/100){printf("ATTENTION: Vos dépenses alimentaires sont importantes (recommandation: max 30%%)\n\n");
    }
    if(transports > (revenu*15)/100){printf("ATTENTION: Vos dépenses de transport sont élevées (recommandation: max 15%%)\n\n");
    }
    if(communications > (revenu*10)/100){printf("ATTENTION: Vos frais de téléphone/internet sont élevés (recommandation: max 10%%)\n\n");
    }
    
    
    
   if (solde <= 0){
       printf("Statut du budget: DÉFICITAIRE (solde < 0)\n\n");
       printf("- Envisagez un emploi à temps partiel ou des missions ponctuelles\n");
       printf("- Analysez vos dépenses pour identifier des réductions possibles\n");
       printf("- Établissez un budget hebdomadaire strict pour mieux contrôler vos sorties d’argent\n");
       printf("- Contactez des services sociaux ou des associations pour un soutien temporaire\n");
   }else if (solde < (revenu*10)/100){
       printf("Votre budget est très serré (%.2f CHF restants). Suggestions:\n", solde);
       printf("- Envisagez de partager un logement pour réduire les coûts\n");
       printf("- Préparez des repas en groupe pour économiser sur l'alimentation\n");
       printf("- Vérifiez si vous êtes éligible à des aides supplémentaires\n");
       printf("- Cherchez un forfait téléphonique moins cher (prépayé ou offres étudiantes)\n");
       printf("- Utilisez les services gratuits de la bibliothèque pour internet\n");
   }
   return 0;
        
        
}
