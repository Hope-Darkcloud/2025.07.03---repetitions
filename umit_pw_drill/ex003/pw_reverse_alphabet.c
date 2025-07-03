#include <unistd.h>
void pw_reverse_alphabet(void){
for (char c = 'z'; c >= 'a'; c--){
write(1, &c, 1 );
}write(1, "\n", 1);

}
