#include <stdio.h>

int _atoi(char *s)
{
	int i, negative, result, string_length, flag, offset;

	i = 0;
	negative = 0;
	result = 0;
	string_length = 0;
	flag = 0;
	offset = 0;

	while (s[string_length] != '\0')
		string_length = string_length + 1;

	while (i < string_length && flag == 0)
	{
		if (s[i] == '-')
			negative = negative + 1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			offset = s[i] - '0';
			if (negative % 2)
				offset = -offset;
			result = result * 10 + offset;
			flag = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
            return(result);
			flag = 0;
		}
		i = i + 1;
	}

	if (flag == 0)
		return (0);

	return (result);
}


int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}