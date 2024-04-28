/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:26:13 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/28 16:29:34 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	res = (char *) malloc(len + 1 * sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s + start, len);
	return (res);
}

/*
int	main()
{
	char	*str = "abcdef";
	char	*res;
	char	*res2;
	
	res = ft_substr(str, 1, 3);
	res2 = ft_substr(str, 4, 2);
	printf("ft_: %s\n", res);
	printf("ft_: %s\n", res2);
	free(res);
	free(res2);
	return (0);
}*/
