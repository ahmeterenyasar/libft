/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:51:18 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/24 14:15:32 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     t_list *head = NULL;
//     int data1 = 42;
//     char *data2 = "Hello";
//     // Create a new list element with integer data
//     head = ft_lstnew(&data1);
//     if (!head)
//     {
//         printf("Error: Memory allocation failed\n");
//         return (1);
//     }
//     // Create another list element with string data
//     t_list *new_element = ft_lstnew(ft_strdup("first"));
//     t_list *new_element1 = ft_lstnew(ft_strdup("second"));
//     t_list *new_element2 = ft_lstnew(ft_strdup("third"));
//     ft_lstadd_front(&new_element1,new_element);
//     ft_lstadd_back(&new_element,new_element2);
//     ft_lstdelone(new_element1,free);
//     printf("%s\n",(char *)new_element->content);
//     printf("%s\n",(char *)new_element->next->content);
//     printf("%s\n",(char *)new_element->next->next->content);
//     return (0);
// }