#include "libft.h"






int main()
{
    t_list *element1 = ft_lstnew(ft_strdup("element1"));
    t_list *element2 = ft_lstnew(ft_strdup("element2"));
    t_list *element3 = ft_lstnew(ft_strdup("element3"));
    
    ft_lstadd_back(&element1, element2);
    ft_lstadd_back(&element2, element3);

    // element1->next = element2;
    // element1->next->next = element3;
    // element1->next->next->next = NULL;
    printf("%s\n", (char *)element1->content);
    printf("%s\n", (char *)element1->next->content);
    printf("%s\n", (char *)element1->next->next->content);

    ft_lstclear(&element1, free);
    printf("%d", ft_lstsize(element1));
    // printf("%s\n", (char *)element1->content);
    // printf("%s\n", (char *)element1->next->content);
    // printf("%s\n", (char *)element1->next->next->content);

}
