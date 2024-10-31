#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    char i;
    char n;

    i = 0;
    n = 0;

    while (dest[i] != '\0')
        i = i + 1;

        while (src[n] != '\0')
        {
            dest[i] = src[n];
        n = n + 1;
        i = i + 1;
        }

    {
        dest[i] = '\0';
    }
    return(dest);

}


int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}