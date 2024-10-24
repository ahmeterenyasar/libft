/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:01:03 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/24 14:19:50 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d_size;
	size_t	s_size;

	d_size = ft_strlen(dst);
	s_size = ft_strlen(src);
	if (dstsize <= d_size)
	{
		return (dstsize + s_size);
	}
	i = d_size;
	j = 0;
	while ((i + j) < (dstsize - 1) && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (d_size + s_size);
}

// #include <stdio.h>
// int main() {
//     char dest[50] = "Hello, ";
//     const char *src = "world!";
//     size_t dest_size = sizeof(dest);
//     size_t result = ft_strlcat(dest, src, dest_size);
//     printf("Resulting string: %s\n", dest); 
// Should print "Hello, world!"
//     printf("Total length: %ld\n", result); 
// Should print the total length of the string
//     return 0;
// }