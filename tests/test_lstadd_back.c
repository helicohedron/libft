/*
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char str[] = "teddy";
	t_list	*oldnode;
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
	ft_lstadd_back(&oldnode, newnode);

    lastnode = ft_lstlast(oldnode);
    if (!lastnode)
    {
		printf("Fail");
		return (2);
	}
    printf("Last node content: %s\n", (char *)lastnode-> content);
	free(oldnode->next);
	free(oldnode);
	return (0);
}
*/