/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:31:49 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/16 17:20:39 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		str[i] = (unsigned	char)c;
		i++;
	}
	return (s);
}

#include <stdio.h>

int main()
{
	int a[] = {1,2,3,4,5};
	char str[10] = "eren";
	int v = -2147483648;
	char *vptr = (char *)&v;
	int i = 0;
	int j = 0;
	while (i < 5)
	{
		char *aptr = (char *)&str[i];
		j = 0;
		while (j < sizeof(int))
		{
			ft_memset(&aptr[j],vptr[j],1);
			j++;
		}
		printf("%d\n",str[i]);
		i++;
	}
	
	// ft_memset(str, 256, 3);
	// printf("%s\n", str);
	// return 0;
}