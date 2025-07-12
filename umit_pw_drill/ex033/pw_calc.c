#include <unistd.h>

// Prototypes des fonctions (à inclure dans pw_calc.c)
void pw_putstr(char *str){
    int i = 0;
    while(str[i]){
        write(1, &str[i], 1);
        i++;
    }
}

void pw_putnbr(int nb){
    char c;
    if (nb == -2147483648){
        pw_putstr("-2147483648");
        return;
    }
    if (nb < 0){
        write(1, "-", 1);
        nb = -nb;
    }
    
    if (nb >= 10)
        pw_putnbr(nb/10);
        
        c = (nb %10) + '0';
        write(1, &c, 1);
}
    

    int pw_add(int a, int b){return a + b;}
    int pw_sub(int a, int b){return a - b;}
    int pw_mul(int a, int b){return a * b;}
    int pw_div(int a, int b){if(b==0)return 0; return a / b;}
    int pw_max(int a, int b){
        if (a > b){return a;}
        else {return b;}
}


