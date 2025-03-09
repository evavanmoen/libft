/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:27:06 by evgutier          #+#    #+#             */
/*   Updated: 2025/03/09 15:19:44 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr_src;
	char	*ptr_dst;

	if (src == 0 && dst == 0)
		return (0);
	ptr_src = (char *) src;
	ptr_dst = (char *) dst;
	while (n--)
		*ptr_dst++ = *ptr_src++;
	return (dst);
}
