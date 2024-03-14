/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:32:10 by evgutier          #+#    #+#             */
/*   Updated: 2024/03/12 15:01:35 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	char	cadena[] = ";0s129h&R1/";
	int		i;

	i = 0;
	while (i < 11)
	{
		printf("my ft: %c, %d\n", cadena[i], ft_isdigit(cadena[i]));
		printf("cc ft: %c, %d\n", cadena[i], isdigit(cadena[i]));
		i++;
	}
	return (1);
}*/
