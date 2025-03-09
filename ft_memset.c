/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:10:43 by evgutier          #+#    #+#             */
/*   Updated: 2025/03/09 15:17:18 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (n--)
		*ptr++ = c;
	return (s);
}

/*int	main()
{
	char mem[15] = "jjjjjjjjjjjjjjj";
	
	ft_memset(mem, 'c', 5);
	printf("Res: %s\n", mem);
	return 0;
}*/
