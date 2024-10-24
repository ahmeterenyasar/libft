/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:38:22 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/24 14:43:31 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

// void upper(unsigned int index, char *c) {
//     *c = ft_toupper(*c);
// }
// int main() {
//     char str[] = "hello, world!";
//     ft_striteri(str, upper);
//     printf("Result: %s\n", str); // Should print "HELLO, WORLD!"
//     return 0;
// }