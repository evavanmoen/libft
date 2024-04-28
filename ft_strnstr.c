/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:23:49 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/28 19:30:22 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_strings(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1)
		return (0);
	i = 0;
	while (*(s2 + i) && *(s1 + i) && n)
	{
		if (*(s1 + i) != *(s2 + i))
			return (0);
		i++;
		n--;
	}
	if (*(s2 + i) == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	if (len_s2 == 0)
		return ((char *) s1);
	if (n != 0)
	{
		while (*s1 && n)
		{
			if (*s1 == *s2)
			{
				if (check_strings(s1, s2, n))
					return ((char *) s1);
			}
			s1++;
			n--;
		}
	}
	return (NULL);
}
