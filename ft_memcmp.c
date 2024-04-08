/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:23:26 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/08 18:45:53 by evgutier         ###   ########.fr       */
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
	if (n == 0)
		return (0);
	while (n-- && *ptr_s1 && *ptr_s2)
	{
		if (*ptr_s1 == *ptr_s2)
		{
			ptr_s1++;
			ptr_s2++;
		}
		else
			return (*ptr_s1 - *ptr_s2);
		printf("veo n: %zu\n", n);
	}
	if (n == 1)
		return (0);
	return (*ptr_s1 - *ptr_s2);
}
