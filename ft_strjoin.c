/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:21:05 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/28 16:23:30 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = (char *) malloc(len_s1 + len_s2 * sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, len_s1);
	ft_memcpy(res + len_s1, s2, len_s2);
	return (res);
}

/*
int	main()
{
	char	*str = "abcdef";
	char	*str2 = "ABC";
	char	*res;
	
	res = ft_strjoin(str, str2);
	printf("ft_: %s\n", res);
	free(res);
	return (0);
}*/
