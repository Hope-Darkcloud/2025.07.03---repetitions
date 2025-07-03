#include <unistd.h>
void pw_print_digits(void){
char c = '0';
for(int i = 0; i < 10; i++){
c = '0' + i;
write(1, &c, 1);
}write(1, "\n", 1);
}
