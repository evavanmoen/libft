/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:16:28 by evgutier          #+#    #+#             */
/*   Updated: 2025/03/09 15:23:24 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
int	main()
{
	int	i;
	int	n;
	int	*a;
	
	printf("Number of elements to be entered: ");
	scanf("%d",&n);
	
	a = (int *) ft_calloc(n, sizeof(int));
	printf("Enter %d numbers: \n", n);
	for (i = 0; i < n; i++)
		scanf("%d",&a[i]);
	
	printf("The numbers entered are: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	
	printf("\n");
	free(a);
	return (0);
}*/
