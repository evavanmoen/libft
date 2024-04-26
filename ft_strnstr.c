#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (!s2)
		return ((char *) s1);
	while (*s2 && n--)
	{
		if (*s2 == '\0')
			return ((char *) s1);
		if (*s1 != *s2)
			return (NULL);
		s2++;
		s1++;
	}
	return ((char *) s1);
}
