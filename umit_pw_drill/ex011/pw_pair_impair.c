char pw_pair_impair(char *str){
    if (str == 0){
    return 'N';}

int i = 0;
int count = 0;
while (str[i] != '\0'){
if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
count++;}
i++;
}
if (count % 2 == 0){
return 'P';}
else {
return 'I';}

}
