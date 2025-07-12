int pw_extract_digits(char *str){
int i = 0;
int result = 0;
if (str == 0 || str[i] == '\0'){return 0;}
while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            result = result * 10 + (str[i] -'0');
    }i++;
}
return result;
}
