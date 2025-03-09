/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:53:29 by evgutier          #+#    #+#             */
/*   Updated: 2025/03/09 15:20:38 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	pos;
	size_t	len_src;
	size_t	len_dst;
	size_t	len_res;

	len_res = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	pos = len_dst;
	if (len_src > dstsize)
		len_res = len_src;
	if (dstsize < len_dst)
		len_res = len_src + dstsize;
	else if (dstsize != 0 && dstsize >= len_dst)
	{
		while (pos < dstsize - 1 && *src)
		{
			dst[pos++] = *src;
			src++;
		}
		dst[pos] = 0;
		len_res = len_src + len_dst;
	}
	return (len_res);
}
