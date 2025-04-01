#include <unistd.h>
int	main(void)
{
	char a;
	a = 97;
	while (a < 123)
	{
		if ((a+1) % 2 == 0)
		{
			write(1, &a, 1);
		}
		else
		{
			a -= 32;
			write(1, &a, 1);
			a += 32;
		}
		a++;
	}
	return (0);
}
