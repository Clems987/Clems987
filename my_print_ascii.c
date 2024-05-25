void print_char(char c);

void my_print_ascii(void){
    int i = 32; 
    while (i <= 126){
        print_char(i);
        i++;
    }
}