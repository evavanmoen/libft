#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;
	
	if (!s)
		return (0);

	ptr = (char *) s;
	while (n != 0)
	{
		*ptr++ = c;
		n--;
	}

	return (s);
}
