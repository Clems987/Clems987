int my_strlen(char *str)
{
    int len = 0;
    int i = 0;

    while (str[i] != '\0') {
        len++;
        i++;
    }
    return len;
}