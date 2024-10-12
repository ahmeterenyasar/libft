/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:21:44 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/12 10:29:13 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char *res;
    int i;
    int j;
    
    i = 0;
    j = 0;
    /* allocating the required memory */
    res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!res)
        return (NULL);
    /* copying s1 into our res string */
    while (s1[i])
        res[j++] = s1[i++];
    /* we have to reset i to 0, otherwise we won't copy s2
     * from the start
     */
    i = 0;
    /* copying s2 into our res string */
    while (s2[i])
        res[j++] = s2[i];
    /* !! don't forget to NUL-terminate the string !! */
    res[j] = 0;
    /* finallly, we can return the new string */
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