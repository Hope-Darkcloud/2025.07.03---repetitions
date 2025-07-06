#include <unistd.h>
void pw_putnbr(unsigned int nb){
if (nb >=10)
pw_putnbr(nb/10);
char c = (nb % 10) + '0';
write(1, &c, 1);
}
