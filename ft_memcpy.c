#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr_src;
	char	*ptr_dest;

	if (!src && !dest)
		return (0);
	ptr_src = (char *) src;
	ptr_dest = (char *) dest;
	while (src && n-- != 0)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
