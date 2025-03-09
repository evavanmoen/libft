/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:23:26 by evgutier          #+#    #+#             */
/*   Updated: 2025/03/09 15:22:27 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *) s1;
	ptr_s2 = (unsigned char *) s2;
	if (n != 0)
	{
		while (n--)
		{
			if (*ptr_s1++ != *ptr_s2++)
				return (*--ptr_s1 - *--ptr_s2);
		}
	}
	return (0);
}
