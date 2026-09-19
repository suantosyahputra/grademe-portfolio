#include <unistd.h>

int	gm_putchar(int c)
{
	(void)c;
	write(1, &c, 1);
	return (c);
}
