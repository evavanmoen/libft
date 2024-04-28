/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:13:11 by evgutier          #+#    #+#             */
/*   Updated: 2024/04/28 16:30:14 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	flag;

	res = 0;
	i = 0;
	flag = 0;
	if (str[i] == '-')
	{
		flag = 1;
		i++;
	}
	while (str[i] && (str[i] >= 0 && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (flag)
		res = -1 * res;
	return (res);
}

/*
int	main()
{
	int	val;
	char	str[20];
	
	strcpy(str, "98993489");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	
	strcpy(str, "tutorialspoint.com");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	
	return(0);
}*/
