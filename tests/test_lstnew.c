/*
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	//char str[] = "hello";
	int	nbr = 42;
	int *ptr = &nbr;
	t_list	*node;

	//node = ft_lstnew(str);
	node = ft_lstnew(ptr);
	if (!node)
	{
		printf("Malloc fail");
		return (1);
	}
	//printf("Content: %s\n", (char *)node->content);
	printf("Content: %d\n", *(int *)node->content);
	// take note: Dereference above
	printf("Next: %p\n", (void *)node->next);

	free(node);
	return (0);
}
*/