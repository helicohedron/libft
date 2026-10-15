/*
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char str[] = "teddy";
	t_list	*oldnode;
	// t_list	**lst;
	t_list	*newnode;
    t_list  *lastnode;

	oldnode = ft_lstnew(str);
	if (!oldnode)
	{
		printf("Malloc fail");
		return (1);
	}

	newnode = ft_lstnew("The Greatest Bear");
	if (!newnode)
	{
		printf("Malloc fail");
		return (1);
	}
    ft_lstadd_front(&oldnode, newnode);
    
    newnode = ft_lstnew("A brave new world");
	if (!newnode)
	{
		printf("Malloc fail");
		return (1);
	}
	ft_lstadd_front(&oldnode, newnode);
	
    lastnode = ft_lstlast(oldnode);
    printf("Last node: %s\n", (char *)lastnode->content);

    free(oldnode->next->next);
	free(oldnode->next);
	free(oldnode);
	return (0);
}
*/