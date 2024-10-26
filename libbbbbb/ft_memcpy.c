/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:05:03 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/26 09:40:44 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int main()
{
	char dest[] = "ahmet";
	printf("%s", ft_memcpy(dest+2,dest,4));
}
//!!! dest[] * farkını gptye sor
// int main()
// {
// 	// char dest[] = "ahmet";
// 	char src[20] = "ahmet";
// 	char *res = ft_memcpy(src + 2,src,5);
// 	printf("%s",res);
// }