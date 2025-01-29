/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 08:09:23 by evgutier          #+#    #+#             */
/*   Updated: 2024/09/03 08:11:56 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	char_check(char const *str, char const c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*(s1 + start) && char_check(set, *(s1 + start)))
		start++;
	end = ft_strlen(s1);
	while (end > start && char_check(set, *(s1 + (end - 1))))
		end--;
	trim = str_new(end - start);
	if (!trim)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		*(trim + i) = *(s1 + (start + i));
		i++;
	}
	*(trim + i) = '\0';
	return (trim);
}

/*int	main()
{
	char str[] = " Hello, World! ";
	char set[] = " ";
	char *trimmed = ft_strtrim(str, set);
	printf("1er res: %s\n", trimmed);
	
	char str1[] = " \t\t Welcome to the Jungle \t ";
	char set1[] = " \t";
	char *trimmed1 = ft_strtrim(str1, set1);
	printf("1er res: %s\n", trimmed1);
	
	char str2[] = "NoTrimmingNeeded";
	char set2[] = " ";
	char *trimmed2 = ft_strtrim(str2, set2);
	printf("1er res: %s\n", trimmed2);
	return (0);
}*/
