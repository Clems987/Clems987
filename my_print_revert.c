void print_char(char c);

int my_strlen(char *str);

void my_print_revert(char *toRevert){
    int i = my_strlen(toRevert);
    while (i >= 0){
        print_char(toRevert[i]);
        i--;
    }
}   