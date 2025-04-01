#include <unistd.h>
#include <stdio.h>

char	*replace(char *str, char *ltr, char *nlt)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *ltr)
		{
			str[i] = *nlt;
		}
		i++;
	}
	return (str);
}


int	main(void)
{
	char str[] = "banana e bola na casa da maria";
	char ltr = 'a';
	char nlt = 'e';
	
	printf("%s", replace(str, &ltr, &nlt));
	return (0);
}
