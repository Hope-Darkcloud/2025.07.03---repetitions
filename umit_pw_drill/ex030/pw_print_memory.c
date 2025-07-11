#include <unistd.h>
#include <stddef.h>
void pw_print_memory(void *addr, size_t size){
if(addr == 0 || size == 0){return;}
unsigned char *ptr = (unsigned char *)addr;
size_t i = 0;
while(i<size){
if(ptr[i]>=32 && ptr[i] <= 126){
write(1, &ptr[i], 1);
}else{
char dot = '.';
write(1, &dot, 1);}
i++;
}
}
