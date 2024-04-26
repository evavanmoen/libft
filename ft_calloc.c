#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(count * size);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}

int	main()
{
	int	i;
	int	n;
	int	*a;
	
	printf("Number of elements to be entered: ");
	scanf("%d",&n);
	
	a = (int *) calloc(n, sizeof(int));
	printf("Enter %d numbers: \n", n);
	for (i = 0; i < n; i++)
		scanf("%d",&a[i]);
	
	printf("The numbers entered are: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	
	printf("\n");
	free(a);
	return (0);
}
