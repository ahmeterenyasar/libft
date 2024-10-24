/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:08:47 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/24 14:18:56 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include "fcntl.h"
// int main(void)
// {
//     int fd;
//     char c = 'A';
//     fd = open("razaman.txt", O_CREAT | O_RDWR, 0777);
//     ft_putchar_fd(c, fd);
//     close(fd);
//     return (0);
// }