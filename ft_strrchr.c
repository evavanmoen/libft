/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:07:47 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/08 16:47:51 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;
	char	ch;
	char	*ptr_s;

	ptr_s = (char *) s;
	ch = c;
	len_s = ft_strlen(ptr_s);
	while (s[len_s] != ch && len_s > 0)
		len_s--;
	s = s + len_s;
	if (*s == ch)
		return ((char *) s);
	return (0);
}
