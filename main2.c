#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

// Función para probar ft_isalpha
void	test_isalpha(void)
{
	char	cadena[] = ";0sR(h&R1/";
	int		i;

	printf("isalpha: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isalpha(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isalpha(cadena[i]));
		i++;
	}
}

// Función para probar ft_isdigit
void	test_isdigit(void)
{
	char	cadena[] = ";0sR(h&R1/";
	int		i;

	printf("\nisdigit: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isdigit(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isdigit(cadena[i]));
		i++;
	}
}

// Función para probar ft_isalnum
void	test_isalnum(void)
{
	char	cadena[] = ";0sR(h&R1/";
	int		i;

	printf("\nisalnum: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isalnum(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isalnum(cadena[i]));
		i++;
	}
}

// Función para probar ft_isascii
void	test_isascii(void)
{
	char	cadena[] = ";0sR(h&R1/";
	int		i;

	printf("\nisascii: \n");
	i = 0;
	while (i < 10)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isascii(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isascii(cadena[i]));
		i++;
	}
	printf("ft_: %d\n", ft_isascii(-128));
	printf("lib: %d\n", isascii(-128));
}

// Función para probar ft_isprint (fuera del rango 32,126 son no printables + tab +  \0 + caracts control(tab vertical,  salto pagina, ....)
void	test_isprint(void)
{
	char	cadena[] = ";0sR(h&R1/";
	char	cadena1 = '\0';
	int		i;

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
}

// Función para probar ft_strlen
void	test_strlen(void)
{
	char	cadena[] = ";0sR(h&R1/";

	printf("\nstrlen: \n");
	printf("ft_: %s, %zu\n", cadena, ft_strlen(cadena));
	printf("lib: %s, %lu\n", cadena, strlen(cadena));
}

// Función para probar ft_memset
void	test_memset(void)
{
	char	cadena2a_set[] = "almost every programmer should know memset!";
	//char	cadena2b_set[] = "almost every programmer should know memset!";

	printf("\nmemset: \n");
	printf("ft_: %s, %p\n", cadena2a_set, ft_memset(cadena2a_set, '-', 6));
	printf("lib: %s, %p\n", cadena2a_set, memset(cadena2a_set, '-', 6));
}

// Función para probar ft_bzero
void	test_bzero(void)
{
	char	cadena2a_set[] = "almost every programmer should know memset!";
	char	cadena2b_set[] = "almost every programmer should know memset!";

	printf("\nbzero: \n");
	ft_bzero(cadena2a_set, 4);
	printf("ft_: %s\n", cadena2a_set);
	bzero(cadena2b_set, 4);
	printf("lib: %s\n", cadena2b_set);
}

// Función para probar ft_memcpy
void	test_memcpy(void)
{
	char	source3a[] = "Hello, world!";
	char	buffer3a[20];
	char	source3b[] = "Hello, world!";
	char	buffer3b[20];

	printf("\nmemcpy: \n");
	printf("ft_: %s, %p\n", buffer3a, ft_memcpy(buffer3a, source3a, 6));
	printf("lib: %s, %p\n", buffer3b, memcpy(buffer3b, source3b, 6));
}

// Función para probar ft_memmove
void	test_memmove(void)
{
	char	str1a[] = "memmove can be very useful......";
	char	str1b[] = "memmove can be very useful......";

	printf("\nmemmove: \n");
	printf("ft_: %s, %p\n", str1a, ft_memmove(str1a + 20, str1a + 15, 11));
	printf("lib: %s, %p\n", str1b, memmove(str1b + 20, str1b + 15, 11));
}

// Función para probar ft_strlcpy
void	test_strlcpy(void)
{
	char	strlcpy1a[20] = "Hello";
	char	strlcpy1b[20];
	//char	strlcpy1c[20];

	printf("\nstrlcpy: \n");
	printf("ft_: %s, %zu\n", strlcpy1b, ft_strlcpy(strlcpy1b, strlcpy1a, 11));
	//printf("lib: %s, %lu\n", strlcpy1c, strlcpy(strlcpy1c, strlcpy1a, 11));
}

// Función para probar ft_strlcat
void	test_strlcat(void)
{
	char	dst1a[5] = "";
	//char	dst1b[5] = "";

	printf("\nstrlcat: \n");
	printf("ft_: %s, %zu\n", dst1a, ft_strlcat(dst1a, "123", 0));
	//printf("lib: %s, %zu\n", dst1b, strlcat(dst1b, "123", 0));
}

// Función para probar ft_toupper y ft_tolower
void	test_toupper_tolower(void)
{
	char	ch;

	printf("\ntoupper: \n");
	for (ch = 0x41; ch <= 0x7a; ch++)
	{
		printf("ft_upp: %#04x\n", ft_toupper(ch));
		printf("ft_low: %#04x\n", ft_tolower(ch));
		printf("lib_upp: %#04x\n", toupper(ch));
		printf("lib_low: %#04x\n", tolower(ch));
	}
}

// Función para probar ft_strchr
void	test_strchr(void)
{
	const char	str[] = "This is just a String";

	printf("\nstrchr: \n");
	printf("ft_: %s, %s\n", str, ft_strchr(str, 'u'));
	printf("lib: %s, %s\n", str, strchr(str, 'u'));
}

// Función para probar ft_strrchr
void	test_strrchr(void)
{
	const char	str1[] = "This world is not fot me";

	printf("\nstrrchr: \n");
	printf("ft_: %s, %s\n", str1, ft_strrchr(str1, 't'));
	printf("lib: %s, %s\n", str1, strrchr(str1, 't'));
}

// Función para probar ft_memchr
void	test_memchr(void)
{
	const char	str2a[] = "https://www.tutorialspoint.com";
	const char	str2b[] = "https://www.tutorialspoint.com";
	const char	ch2 = '.';

	printf("\nmemchr: \n");
	ft_memchr(str2a, ch2, strlen(str2a));
	printf("(ft_) String after |%c| is - |%s|\n", ch2, str2a);
	void *ptr = memchr(str2b, ch2, strlen(str2b));
	if (ptr)
		printf("(lib) String after |%c| is - |%s|\n", ch2, str2b);
}

// Función para probar ft_memcmp
void	test_memcmp(void)
{
	char	strcmp1[15];
	char	strcmp2[15];
	int		ret;

	printf("\nmemcmp: \n");
	ft_memcpy(strcmp1, "abcdef", 6);
	ft_memcpy(strcmp2, "ABCDEF", 6);
	ret = ft_memcmp(strcmp1, strcmp2, 0);
	if (ret > 0)
		printf("str2 is less than str1\n");
	else if (ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equal to str2\n");

	memcpy(strcmp1, "abcdef", 6);
	memcpy(strcmp2, "ABCDEF", 6);
	ret = memcmp(strcmp1, strcmp2, 0);
	if (ret > 0)
		printf("str2 is less than str1\n");
	else if (ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is equal to str2\n");
}

// Función para probar ft_strnstr
void	test_strnstr(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char		*ptr;

	printf("\nstrnstr: \n");
	ptr = ft_strnstr(largestring, smallstring, 4);
	printf("ft_: %s\n", ptr);
	
	ptr = ft_strnstr("abcdefgh", "abc", 3);
	printf("ft_: %s\n", ptr);
}


// Función ft_atoi
void	test_atoi(void)
{
	char	str[] = "908475966";
	int	ret;

	printf("\natoi: \n");
	ret = ft_atoi(str);
	printf("ft_: %d\n", ret);
	ret = atoi(str);
	printf("lib: %d\n", ret);
}

// Función principal
int	main(void)
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_strlen();
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_strlcpy();
	test_strlcat();
	test_toupper_tolower();
	test_strchr();
	test_strrchr();
	test_memchr();
	test_memcmp();
	test_strnstr();
	test_atoi();

	return (0);
}
