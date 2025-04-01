#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int temp;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0); 
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		temp = argv[1][i];
		if (temp > 96 && temp < 123)
		{
			if ((temp + 13) > 122)
			{
				temp -= 25;       // 117 + 13 - 25 = 105
				temp += 13;
			}
		}
		else if (temp > 65 && temp < 91)
		{
			if ((temp + 13) > 90)
			{
				temp -= 25;
				temp += 13;
			}
		}
		i++;
	}
	while (argv[1])
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}
