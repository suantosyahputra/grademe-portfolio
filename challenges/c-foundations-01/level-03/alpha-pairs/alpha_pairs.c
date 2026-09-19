#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char c;
	int	i;

	i = 0;
	while(i < 26)
	{
		if(i % 2 == 0)
		{
			c = 'a' + i;
		}
		else
		{
			c = 'A' + i;
		}
		write(1, &c, 1);
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
