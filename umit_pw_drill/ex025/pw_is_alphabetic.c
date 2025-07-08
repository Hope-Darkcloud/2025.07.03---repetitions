int pw_is_alphabetic(char *str){
    if(str == 0){
        return 0;
    }

int i = 0;
    while(str[i] != '\0'){
        if (!((str[i] >= 'a' && str[i] <= 'z') ||(str[i] >= 'A' && str[i] <= 'Z'))){
            return 0;
        }
        i++;
    }
    return 1;
}
