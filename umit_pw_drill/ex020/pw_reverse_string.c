void pw_reverse_string(char *str) {
    if (str == 0)
           return;
    
    int i = 0;
    int j;
    char temp;

    while (str[i] != '\0') {
        i++;
    }

    i--;
    j = 0;

    while (j < i) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
}
