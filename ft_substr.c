#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;

	res = malloc(len * sizeof(char));
        if (!res)
                return (NULL);

	ft_memcpy(res, s+start, len);
	return (res);
}

int     main()
{
        char    *str = "abcdef";
        char    *res;
        char    *res2;

        res = ft_substr(str, 1, 3);
      	res2 = ft_substr(str, 4, 2);
      	printf("ft_: %s\n", res);
        printf("ft_: %s\n", res2);
	free(res);
	free(res2);
        return (0);
}

