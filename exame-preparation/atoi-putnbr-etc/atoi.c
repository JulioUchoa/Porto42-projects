

int _atoi(char *str)
{
	int	i;
	int sign;
	int total;

	total = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	return (total * sign);
}
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char oxe[] = "   -123bf4";
	int	i;

	printf("%d\n", atoi(oxe));
	i = _atoi(oxe);
	printf("%d", i);
	return (0);
}
