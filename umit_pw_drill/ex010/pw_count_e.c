int pw_count_e(char *str){
int i = 0;
int count_e = 0;
if (str == 0) {
        return 0;
    }
while (str[i] != '\0'){
if(str[i] == 'e'){
count_e++; }
i++;
}
return count_e;
}
