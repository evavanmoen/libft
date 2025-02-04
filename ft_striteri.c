/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:39:10 by evgutier          #+#    #+#             */
/*   Updated: 2025/02/04 22:56:40 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	toupper_wrapper(unsigned int index, char *c)
{
	(void)index;
	*c = (char)ft_toupper((unsigned char)*c);
}


int	main()
{
	char	str[] = "hello, world!";

	printf("Ori: %s\n", str);
	ft_striteri(str, toupper_wrapper);
	printf("Res: %s\n", str);
	return 0;
}*/
