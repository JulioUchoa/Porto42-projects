#include <stdio.h>
#include <unistd.h>


void *prinstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	test_if_exists(char *str, char *wrd)
{
	int	flag;
	int	i;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (*wrd == str[i])
			flag = 1;
		i++;
	}
	return (flag);
}

int	main(int argc, char *argv[])
{
	int	i;
	
	if (argc != 4)
	{
		write(1, "\n", 1); 
	}
	if (test_if_exists(argv[0], argv[3]))
		prinstr(argv[1]);
			
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == *argv[2])
		{
			argv[1][i] = *argv[3];
		}
		i++;
	}
	prinstr(argv[1]);
	write(1, "\n", 1); 
	return (0);
}
