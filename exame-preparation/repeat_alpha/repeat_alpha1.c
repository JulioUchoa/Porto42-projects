#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			j = argv[1][i] - 97;	
		}
		else if (argv[1][i] >= 65 && argv[1][i] <= 122)
		{
			j = argv[1][i] - 65;
		}
		while (j >= 0)
		{
			write(1, &argv[1][i], 1);
			j--;
		}
		j = 0;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
