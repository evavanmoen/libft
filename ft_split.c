/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgutier <evgutier@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:24:00 by evgutier          #+#    #+#             */
/*   Updated: 2025/01/27 15:24:06 by evgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_c(char const *s, char c)
{
	size_t	count;
	int	fin;

        count = 0;
        fin = 0;	
	while (*s)
	{
		if (*s != c && !fin)
		{
			fin = 1;
			count++;
		}
		else if (*s == c)
			fin = 0;
		s++;
	}
	return (count);
}

char	*new_s(const char *start, size_t len)
{
	char	*final_s;

	final_s = (char *) malloc((len + 1) * sizeof(char));
	if (!final_s)
		return (NULL);
	ft_memcpy(final_s, start, len);
	final_s[len] = '\0';
	return (final_s);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;
	size_t	i;
	const char	*start_s;

	if (!s)
		return (NULL);
        count = count_c(s, c);
	res = (char **) malloc((count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start_s = s;
			while(*s && *s != c)
				s++;
			res[i++] = new_s(start_s, s - start_s);
			if (!res[i - 1])
			{
				while (i-- > 0)
					free(res[i]);
				free(res);
				return (NULL);
			}
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}

/*int	main()
{
	char	months[] = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
	char	**tokens;
	int	i = 0;
	
	tokens = ft_split(months, ',');
	if (tokens)
	{
		while (*(tokens + i))
		{
			printf("month=[%s]\n", *(tokens + i));
			free(*(tokens + i));
		}
		printf("\n");
		free(tokens);
	}
	return 0;
}*/
