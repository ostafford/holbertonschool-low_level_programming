#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
    char i;
    char l;

    i = 0;
    l = 0;

    while (dest[i] != '\0')
        i = i + 1;

        while (src[l] != '\0' && n < l)
        {
            dest[i] = src[l];
        l = l + 1;
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
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}