int pw_pow(int base, int exposant){
    
if(exposant == 0){return 1;}
if(exposant < 0){return 0;}
if(base == 0 && exposant > 0){return 0;}
    int resultat = 1;
    int i = 0;
while(i < exposant)
{resultat *=base;
i++;}
return resultat;}
