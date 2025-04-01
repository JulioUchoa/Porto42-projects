#include <unistd.h>
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 1)
	{
		write(1, "\n", 1);
	}
	while (argv[argc][i] != '\0')
	{
		i++;
	}
	write(1, &argv[argc], i);
	return (0);
}
