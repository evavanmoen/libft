#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char cadena[] = ";0sR(h&R1/";
	int i;

	printf("isalpha: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isalpha(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isalpha(cadena[i]));
		i++;
	}

	printf("\nisdigit: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isdigit(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isdigit(cadena[i]));
		i++;
	}

	printf("\nisalnum: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isalnum(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isalnum(cadena[i]));
		i++;
	}

	printf("\nisascii: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isascii(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isascii(cadena[i]));
		i++;
	}
	return (1);
}
