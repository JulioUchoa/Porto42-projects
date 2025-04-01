int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	char word[] = "bitcoin is changing everything";
	int	i;

	i = ft_strlen(word);
	#include <stdio.h>
	printf("%d", i);
	return (0);
}
