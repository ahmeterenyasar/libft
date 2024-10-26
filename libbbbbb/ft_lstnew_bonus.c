/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:51:18 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/26 15:10:14 by ayasar           ###   ########.fr       */
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

// int main()
// {
// 	t_list *node1 = ft_lstnew("E");
// 	t_list *node2 = ft_lstnew("R");
// 	t_list *node3 = ft_lstnew("E");
// 	t_list *node4 = ft_lstnew("N");
// 	t_list *node = ft_lstnew("x");

// 	node1->next = node2;
// 	node2->next = node3;

// 	ft_lstadd_back(&node3, node);
// 	ft_lstadd_back(&node, node4);
	
	
// 	printf("%s", node1->content);
// 	printf("%s", node1->next->content);
// 	printf("%s", node1->next->next->content);
// 	printf("%s", node1->next->next->next->content);
// 	printf("%s", node1->next->next->next->next->content);

// }