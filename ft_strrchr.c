/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:07:47 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/02 19:45:12 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*ptr_s;

	ch = c;
	while (*s)
	{
		ptr_s = (char *) 0;
		if (*s == ch)
			ptr_s = (char *) s;
		s++;
	}
	return (ptr_s);
}
