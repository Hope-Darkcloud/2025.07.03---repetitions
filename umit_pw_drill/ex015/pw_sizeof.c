#include <unistd.h>


/*void pw_print(char *str){
    while(*str)
    write(1, **str, 1);
}

 void pw_putnbr(int nb){
    if(nb>=10)
        pw_putnbr(nb/10)
        char c = (nb%10) + '0';
        write(1, &c, 1);
}*/

 
pw_print("char: ");
pw_putnbr(sizeof(char));
pw_print(" octets\n");


void pw_sizeof(void){
char c = '0';

    
    
write(1, "char: ", 6);
c = '0' + sizeof(char);
write(1, &c, 1);
write(1, " octets", 7);
write(1, "\n", 1);

write(1, "short: ", 7); 
c = '0' + sizeof(short);
write(1, &c, 1);
write(1, " octets", 7);
write(1, "\n", 1);

write(1, "int: ", 5); 
c = '0' + sizeof(int);
write(1, &c, 1);
write(1, " octets", 7);
write(1, "\n", 1);

write(1, "long: ", 6); 
c = '0' + sizeof(long);
write(1, &c, 1);
write(1, " octets", 7);
write(1, "\n", 1);

write(1, "float: ", 7); 
c = '0' + sizeof(float);
write(1, &c, 1);
write(1, " octets", 7);
write(1, "\n", 1);

write(1, "double: ", 8); 
c = '0' + sizeof(double);
write(1, &c, 1);
write(1, " octets", 7);
write(1, "\n", 1);

}
