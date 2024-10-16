/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:21:44 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/16 16:04:30 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int	i;
	int	j;

	i = 0;
	j = 0;
	res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
	{
		return (NULL);
	}
	while (s1[i])
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		res[j] = s2[i];
		j++;
	}
	res[j] = 0;
	return (res);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	// Example strings to concatenate
	char *s1 = "Hello, ";
	char *s2 = "World!";
	
	// Call ft_strjoin to concatenate s1 and s2
	char *result = ft_strjoin(s1, s2);

	// Check if memory allocation was successful
	if (result == NULL)
	{
		printf("Memory allocation failed!\n");
		return 1;
	}
	
	// Print the concatenated string
	printf("Result: %s\n", result);
	
	// Free the allocated memory
	free(result);

	return 0;
}