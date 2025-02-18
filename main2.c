#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <fcntl.h>  // Para open()
#include <unistd.h> // Para write()
#include "libft.h"

void	test_isalpha(void)
{
	char cadena[] = ";0sR(h&R1/";
	printf("isalpha:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("ft_: %c, %d\n", cadena[i], ft_isalpha(cadena[i]));
		printf("lib: %c, %d\n", cadena[i], isalpha(cadena[i]));
	}
}

void	test_isdigit(void)
{
	printf("\nisdigit:\n");
	for (int i = 0; i < 128; i++)
	{
		printf("ft_: %c, %d\n", i, ft_isdigit(i));
		printf("lib: %c, %d\n", i, isdigit(i));
	}
}

void	test_isalnum(void)
{
	printf("\nisalnum:\n");
	for (int i = 0; i < 128; i++)
	{
		printf("ft_: %c, %d\n", i, ft_isalnum(i));
		printf("lib: %c, %d\n", i, isalnum(i));
	}
}

void	test_isascii(void)
{
	printf("\nisascii:\n");
	for (int i = 0; i < 256; i++)
	{
		printf("ft_: %c, %d\n", i, ft_isascii(i));
		printf("lib: %c, %d\n", i, isascii(i));
	}
}

void	test_isprint(void)
{
	printf("\nisprint:\n");
	for (int i = 0; i < 128; i++)
	{
		printf("ft_: %c, %d\n", i, ft_isprint(i));
		printf("lib: %c, %d\n", i, isprint(i));
	}
}

void	test_strlen(void)
{
	char cadena[] = ";0sR(h&R1/";
	printf("\nstrlen:\n");
	printf("ft_: %s, %zu\n", cadena, ft_strlen(cadena));
	printf("lib: %s, %lu\n", cadena, strlen(cadena));
}

void	test_memset(void)
{
	char str1[50] = "Hola mundo!";
	char str2[50] = "Hola mundo!";
	
	printf("\nmemset:\n");
	printf("ft_: %s\n", (char *)ft_memset(str1, '-', 4));
	printf("lib: %s\n", (char *)memset(str2, '-', 4));
}

void	test_bzero(void)
{
	char str1[10] = "123456789";
	char str2[10] = "123456789";
	
	printf("\nbzero:\n");
	ft_bzero(str1, 4);
	bzero(str2, 4);
	printf("ft_: %s\n", str1 + 4);
	printf("lib: %s\n", str2 + 4);
}

void	test_memcpy(void)
{
    char src[] = "123456789";
    char dest1[10];
    char dest2[10];
    
    printf("\nmemcpy:\n");
    printf("ft_: %s\n", (char *)ft_memcpy(dest1, src, 6));
    printf("lib: %s\n", (char *)memcpy(dest2, src, 6));
}

void test_memmove(void)
{
    char src[] = "123456789";
    char dest1[10];
    char dest2[10];
    
    printf("\nmemmove:\n");
    printf("ft_: %s\n", (char *)ft_memmove(dest1, src, 6));
    printf("lib: %s\n", (char *)memmove(dest2, src, 6));
}

void test_strlcpy(void)
{
    char src[] = "123456789";
    char dest1[10];
    char dest2[10];
    
    printf("\nstrlcpy:\n");
    printf("ft_: %zu\n", ft_strlcpy(dest1, src, 6));
    printf("lib: %lu\n", strlcpy(dest2, src, 6));
}

void test_toupper(void)
{
    printf("\ntoupper:\n");
    for (int i = 97; i <= 122; i++)
    {
        printf("ft_: %c, %c\n", i, ft_toupper(i));
        printf("lib: %c, %c\n", i, toupper(i));
    }
}

void test_putnbr_fd(void)
{
    int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("Error al abrir el archivo");
        return;
    }
    
    printf("\nft_putnbr_fd (Revisar test_output.txt):\n");
    ft_putnbr_fd(12345, fd);
    ft_putnbr_fd(-12345, fd);
    ft_putnbr_fd(0, fd);
    ft_putnbr_fd(-2147483648, fd);
    
    close(fd);
}

int main(void)
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
    test_toupper();
    test_putnbr_fd();
    
    return 0;
}
