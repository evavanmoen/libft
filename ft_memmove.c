/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:02:57 by evgutier          #+#    #+#             */
/*   Updated: 2025/03/09 15:20:02 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_src;
	char	*ptr_dst;

	ptr_src = (char *) src;
	ptr_dst = (char *) dst;
	if (dst != NULL || src != NULL)
	{
		if (ptr_src < ptr_dst)
		{
			while (len--)
				ptr_dst[len] = ptr_src[len];
		}
		else
			ft_memcpy(ptr_dst, ptr_src, len);
	}
	return (dst);
}
