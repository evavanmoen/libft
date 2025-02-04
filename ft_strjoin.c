/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 07:47:13 by evgutier          #+#    #+#             */
/*   Updated: 2025/02/04 23:00:18 by evgutier         ###   ########.fr       */
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
	res = (char *) malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_memmove(res, s1, len_s1);
	ft_memmove(res + len_s1, s2, len_s2);
	res[len_s1 + len_s2] = '\0';
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
