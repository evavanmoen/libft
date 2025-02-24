/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:40:49 by evgutier          #+#    #+#             */
/*   Updated: 2025/02/24 13:12:23 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *) s1;
	ptr_s2 = (unsigned char *) s2;
	if (n != 0 && (*ptr_s1 != '\0' || *ptr_s2 != '\0'))
	{
		while (n--)
		{
			if (*ptr_s1 == '\0' && *ptr_s2 == '\0')
				return (0);
			else if (*ptr_s1 == '\0')
				return (-1);
			else if (*ptr_s2 == '\0')
				return (1);
			else if (*ptr_s1++ != *ptr_s2++)
				return (*--ptr_s1 - *--ptr_s2);
		}
	}
	return (0);
}
