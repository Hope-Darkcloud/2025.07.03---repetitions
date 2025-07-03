#include <unistd.h>
void pw_count_reverse(unsigned int n){
char c = '0';
for(int i = (int)n; i >= 0; i--){
c= '0' + i;
write(1, &c, 1);
write(1, "\n", 1);
}
}
