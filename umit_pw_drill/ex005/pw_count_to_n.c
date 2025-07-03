#include <unistd.h>
void pw_count_to_n(unsigned int n){
char c = '0';
    for (unsigned int i = 0; i <= n; i++){
c = '0' + i;
write(1, &c, 1);
write(1, "\n", 1);
}
}
