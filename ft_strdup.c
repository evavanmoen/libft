#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	char	*res;

	len_s1 = ft_strlen(s1) + 1;
	res = malloc (len_s1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, len_s1);
	return (res);
}

int	main()
{
	char	*str = "Helloworld";
	char	*res;
	char	*res2;

	res = ft_strdup(str);
	res2 = strdup(str);
	printf("ft_: %s\n", res);
	printf("lib: %s\n", res2);

	free(res);
	free(res2);
	return (0);
}
