/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:17:24 by evgutier          #+#    #+#             */
/*   Updated: 2024/03/12 15:23:42 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char cadena[] = ";0sR(h&R1/";
	int i;
	
	i = 0;
	while (i < 10)
	{
		printf("my ft: %c, %d\n", cadena[i], ft_isalpha(cadena[i]));
		printf("cc ft: %c, %d\n", cadena[i], isalpha(cadena[i]));
		i++;
	}
	return (1);
}*/
