char *pw_find_digit(char *str){
    if(str == 0){return 0;}
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            return &str[i];
        }i++;
    }
    return str;
}
