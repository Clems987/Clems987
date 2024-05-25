void print_char(char c);

void my_print_n_ascii(int howMany){
    int i = 32; 
    while (i <= 32 + howMany && i <= 126 && 32 + howMany > 32){
        print_char(i);
        i++;
    }
}