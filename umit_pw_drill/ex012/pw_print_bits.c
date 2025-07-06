#include <unistd.h>
void pw_print_bits(void){
unsigned i = 0;
char bits[8];
while (i <=255){
    for (int j = 7; j >= 0; j--){
        bits[7-j] = ((i>>j)&1) + '0';}
write(1, bits, 8);
write(1, "\n", 1);
i++;
}
}
