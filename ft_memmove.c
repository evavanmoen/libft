#include "libft.h"

void	*cpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);

	if (dest > src && src - dest < (int) n)
	{
		i = n - 1;
		while (i >= 0)
		{
			dest[i] = src[i];
			i--;
		}
		return (dest);
	}

	if (src > dest && src - dest < (int) n)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}	

	ft_memcpy(dest, src, n);
	return (dest);
		
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_src;
	char	*ptr_dest;

	if (src == 0 && dest == 0)
		return (0);
	
	ptr_src = (char *) src;
	ptr_dest = (char *) dest;

	cpy(ptr_dest, ptr_src, n);
	return (dest);
}
