/*
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char str[] = "teddy";
	t_list	*oldnode;
	// t_list	**lst;
	t_list	*newnode;

	oldnode = ft_lstnew(str);
	if (!oldnode)
	{
		printf("Malloc fail");
		return (1);
	}
	printf("Old content: %s\n", (char *)oldnode->content);

	newnode = ft_lstnew("The Greatest Bear");
	if (!newnode)
	{
		printf("Malloc fail");
		return (1);
	}
	ft_lstadd_front(&oldnode, newnode);
	printf("New content: %s\n", (char *)oldnode->content);
	printf("Length of list: %i\n", (ft_lstsize(oldnode)));
	free(oldnode->next);
	free(oldnode);
	return (0);
}
*/