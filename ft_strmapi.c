/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:40:18 by evgutier          #+#    #+#             */
/*   Updated: 2025/02/04 22:49:55 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	toupper_wrapper(unsigned int index, char c)
{
	(void)index;
	return (char)ft_toupper((unsigned char)c);
}


int	main()
{
	const char	*ori = "hello, world!";
	char		*res;

	res = ft_strmapi(ori, toupper_wrapper);
	if (res)
	{
		printf("Ori: %s\n", ori);
		printf("Res: %s\n", res);
		free(res);
	}
	return 0;
}*/
