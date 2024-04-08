#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include "libft.h"

int	main(void)
{
	char		cadena[] = ";0sR(h&R1/";
	char		cadena1 = '\0';
	char		cadena2a_set[] = "almost every programmer should know memset!";
	char		cadena2b_set[] = "almost every programmer should know memset!";
	char		source3a[] = "Hello, world!";
	char		buffer3a[20];
	char		source3b[] = "Hello, world!";
	char		buffer3b[20];
	char		str1a[] = "memmove can be very useful......";
	char		str1b[] = "memmove can be very useful......";
	char		strlcpy1a[20] = "Hello";
    char		strlcpy1b[20];
	char		strlcpy1c[20];
	char		dst1a[5];
	char		dst1b[5];
	const char	str[] = "This is just a String";
	const char	str1[] = "This world is not fot me";
	int			i;
	char		ch = 'u';

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

	printf("\nstrlen: \n");
	printf("ft_: %s, %zu\n", cadena, ft_strlen(cadena));
	printf("lib: %s, %lu\n", cadena, strlen(cadena));

	printf("\nmemset: \n");
	printf("ft_: %s, %p\n", cadena2a_set, ft_memset(cadena2a_set, '-', 6));
	printf("lib: %s, %p\n", cadena2b_set, memset(cadena2b_set, '-', 6));	
	
	printf("\nmemset 2 (segmentation fault): \n");
	/*
	printf("ft_: %s, %p\n", " ", ft_memset(((void *)0), 'a', 12));
	printf("lib: %s, %p\n", " ", memset(((void *)0), 'a', 12));
	*/
	printf("\nbzero: \n");
	ft_bzero(cadena2a_set, 4);
	printf("ft_: %s\n", cadena2a_set);
	bzero(cadena2b_set, 4);
	printf("lib: %s\n", cadena2b_set);

	printf("\nmemcpy: \n");
	printf("ft_: %s, %p\n", buffer3a, ft_memcpy(buffer3a, source3a, 6));
	printf("lib: %s, %p\n", buffer3b, memcpy(buffer3b, source3b, 6));

	printf("\nmemmove: \n");
	printf("ft_: %s, %p\n", str1a, ft_memmove(str1a+20, str1a+15, 11));
	printf("lib: %s, %p\n", str1b, memmove(str1b+20, str1b+15, 11));

	printf("\nstrlcpy: \n");
	printf("ft_: %s, %zu\n", strlcpy1b, ft_strlcpy(strlcpy1b, strlcpy1a, 11));
	printf("lib: %s, %lu\n", strlcpy1c, strlcpy(strlcpy1c, strlcpy1a, 11));

	printf("\nstrlcat: \n");
	printf("ft_: %s, %zu\n", dst1a, ft_strlcat(dst1a, "123", 0));
	printf("lib: %s, %zu\n", dst1b, strlcat(dst1b, "123", 0));

	printf("\ntoupper: \n");
	for (ch = 0x41; ch <= 0x7a; ch++)
	{
		printf("ft_upp: %#04x\n", ft_toupper(ch));
		printf("ft_low: %#04x\n", ft_tolower(ch));
		printf("lib_upp: %#04x\n", toupper(ch));
		printf("lib_low: %#04x\n", tolower(ch));
	}

	printf("\nstrchr: \n");
	printf("ft_: %s, %s\n", str, ft_strchr(str, 'u'));
	printf("lib: %s, %s\n", str, strchr(str, 'u'));	

	printf("\nstrrchr: \n");
	printf("ft_: %s, %s\n", str1, ft_strrchr(str1, 't'));
	printf("lib: %s, %s\n", str1, strrchr(str1, 't'));

	return (1);
}
