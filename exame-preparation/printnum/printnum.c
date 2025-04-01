#include <unistd.h>
int	ft_prinum(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
	return (0);
}
int main(void)
{
	ft_prinum();
	return (0);
}
