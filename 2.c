#include <stdio.h>
int string_length(char *s, int x);

int main(void)
{
    int length = 0, x;
    char string[] = "This is a string";

    x = string_length(string, length); 
    printf("The length of the string will be: %d\n", x);
    return (0);
}

int string_length(char *c, int x)
{
    int a = 0;
    if (*c != '\0')
    {
        a = a + 1;
        string_length(c + 1, x + 1);
    }
    return (a);
}