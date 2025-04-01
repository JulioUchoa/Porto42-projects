#include <unistd.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int c;
	if (argc < 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc < 2)
	{
		return (0);
	}
	c = 0;
	while(argv[1][c])
	{
		c++;
	}
	write(1, argv[1], c);
	write(1, "\n", 1); 	
	
	return (0);	
}
