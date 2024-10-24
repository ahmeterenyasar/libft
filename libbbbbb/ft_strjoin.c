/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:21:44 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/24 15:21:37 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int	main(void)
// {
// 	// Example strings to concatenate
// 	char *s1 = "Hello, ";
// 	char *s2 = "World!";
// 	// Call ft_strjoin to concatenate s1 and s2
// 	char *result = ft_strjoin(s1, s2);
// 	// Check if memory allocation was successful
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation failed!\n");
// 		return 1;
// 	}
// 	// Print the concatenated string
// 	printf("Result: %s\n", result);
// 	// Free the allocated memory
// 	free(result);
// 	return 0;
// }