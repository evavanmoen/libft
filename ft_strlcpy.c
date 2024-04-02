/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:21:44 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/02 16:02:22 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && *src)
		{
			dst[i++] = *src;
			src++;
		}
		dst[i] = 0;
	}
	return (len_src);
}
