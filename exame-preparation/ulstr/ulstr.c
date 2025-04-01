#include <unistd.h>


void	printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] > 96 && argv[1][i] < 123)
			argv[1][i] -= 32;
		else if (argv[1][i] > 64 && argv[1][i] < 91)
			argv[1][i] += 32;
		i++;		
	}
	printstr(argv[1]);
	write(1, "\n", 1); 
	return (0);	
}
