/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:19:04 by evgutier          #+#    #+#             */
/*   Updated: 2025/03/09 15:23:39 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	char	*res;

	len_s1 = ft_strlen(s1);
	res = (char *) malloc(len_s1 + 1 * sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, len_s1);
	res[len_s1] = '\0';
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
