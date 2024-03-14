/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:56:15 by evgutier          #+#    #+#             */
/*   Updated: 2024/03/12 15:28:22 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int	main(void)
{
	char	cadena[] = ";0s129h&R1/";
	int		i;

	i = 0;
	while (i < 11)
	{
		printf("my ft: %c, %d\n", cadena[i], ft_isalnum(cadena[i]));
		printf("cc ft: %c, %d\n", cadena[i], isalnum(cadena[i]));
		i++;
	}
	return (1);
}*/
