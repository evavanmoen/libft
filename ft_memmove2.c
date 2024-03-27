#include "libft.h"

void	*cpy(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = len;
	if (len < ft_strlen(dest))
	{
		dest += n - 1;
		src += n - 1;
		while (n--)
			*dest-- = *src--;
	}
	else
	{
		ft_memcpy(dest, src, n);
	}

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
