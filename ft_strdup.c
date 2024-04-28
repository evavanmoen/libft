/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:19:04 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/28 16:20:47 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	char	*res;

	len_s1 = ft_strlen(s1) + 1;
	res = (char *) malloc(len_s1 + 1 * sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, len_s1);
	return (res);
}

/*
int	main()
{
	char	*str = "Helloworld";
	char	*res;
	char	*res2;

	res = ft_strdup(str);
	res2 = strdup(str);
	printf("ft_: %s\n", res);
	printf("lib: %s\n", res2);

	free(res);
	free(res2);
	return (0);
}*/
