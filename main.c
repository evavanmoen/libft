#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include "libft.h"

int	main(void)
{
	char	cadena[] = ";0sR(h&R1/";
	char	cadena1 = '\0';
	char	cadena2a_set[] = "almost every programmer should know memset!";
	char	cadena2b_set[] = "almost every programmer should know memset!";
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

	printf("\nisprint: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isprint(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isprint(cadena[i]));
		i++;
	}

	printf("\nisprint 2: \n");
	printf("ft_: %c, %d\n", cadena1, ft_isprint(cadena1));
	printf("lib: %c, %d\n", cadena1, isprint(cadena1));

	printf("\nmemset: \n");
	printf("ft_: %s, %p\n", cadena2a_set, ft_memset(cadena2a_set, '-', 6));
	printf("lib: %s, %p\n", cadena2b_set, memset(cadena2b_set, '-', 6));	
	
	printf("\nbzero: \n");
	ft_bzero(cadena2a_set, 4);
	printf("ft_: %s\n", cadena2a_set);

	bzero(cadena2b_set, 4);
	printf("lib: %s\n", cadena2b_set);

	return (1);
}
