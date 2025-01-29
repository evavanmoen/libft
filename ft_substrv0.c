/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:16:00 by evgutier          #+#    #+#             */
/*   Updated: 2024/09/03 07:28:30 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_s;

	len_s = ft_strlen(s);
	res = (char *) malloc(len + 1 * sizeof(char));
	if (!res)
		return (NULL);
	if (len_s > 0 && start < len_s)
	{
		ft_memcpy(res, s + start, len);
		*(res + len) = '\0';
	return (res);
}	

/*int	main()
{
	char	*str = "01234";
	char	*res;
	char	*res2;
	
	res = ft_substr(str, 10, 10);
	res2 = ft_substr(str, 4, 2);
	printf("ft_: %s\n", res);
	printf("ft_: %s\n", res2);
	free(res);
	free(res2);
	return (0);
}*/
