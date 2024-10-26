/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayasar <ayasar@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:59:56 by ayasar            #+#    #+#             */
/*   Updated: 2024/10/26 16:25:16 by ayasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int main()
{
	t_list *node2 = ft_lstnew("A");
	t_list *node3 = ft_lstnew("B");
	t_list *node4 = ft_lstnew("C");

	node2->next = node3;
	node3->next = node4;
	
	t_list *node1 = ft_lstnew("xxx");
	ft_lstadd_front(&node2, node1);

	printf("%s", node1->content);
	printf("%s", node1->next->content);
	printf("%s", node1->next->next->content);
	printf("%s", node1->next->next->next->content);
}
