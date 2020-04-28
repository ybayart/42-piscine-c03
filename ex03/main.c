#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char				dest[50] = "bonjour";
	char				*src;
	unsigned int		size;

	size = 5;
	src = " les amis";
	printf(".%s.\n", strncat(dest, src, size));
}
