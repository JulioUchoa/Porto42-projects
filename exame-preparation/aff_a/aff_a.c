

// se tem 'a' imprime 'a '
// se nao tem 'a' imprime ' '
// se argc != 1 imprime 'a '
     
#include <unistd.h>
int	main(int argc, char *argv[])
{
	int i;
	int flag;

	flag = 0;
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
		{
			write(1, "a\n", 2);
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 0)
	{
		write(1, "\n", 1);
	}
	
	return (0);
}
