/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:57:46 by evgutier          #+#    #+#             */
/*   Updated: 2025/02/04 22:54:59 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(long n)
{
	int	count;	

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		flag;
	int		len;
	long	num;

	num = n;
	flag = (num < 0);
	if (flag)
		num = -num;
	len = count_n(num) + flag;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > flag)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (flag)
		str[0] = '-';
	return (str);
}

/*int	main()
{
	int	n = 12345;

	printf("n to string: %s\n", ft_itoa(n));	
	return 0;
}*/
