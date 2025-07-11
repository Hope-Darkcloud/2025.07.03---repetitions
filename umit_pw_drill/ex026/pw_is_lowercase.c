int pw_is_lowercase(char *str){
if(str == 0 || str[0] == '\0'){
return 0;}
int i = 0;
while(str[i] != '\0'){
if(!(str[i] >= 'a' && str[i] <= 'z'))
{return 0;}
i++;
}
return 1;
}
