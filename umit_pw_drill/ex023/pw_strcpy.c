char *pw_strcpy(char *dest, char *src){
    if (dest == 0){
    return 0;}
    if (src == 0){
        return dest;
    }
    char *original_dest= dest;
    
while(*src != '\0'){
    *dest=*src;
    dest++;
    src++;
}
    *dest = '\0';
    return original_dest;
}
