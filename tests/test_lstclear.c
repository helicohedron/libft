/*
#include "../libft.h"
#include <stdio.h>

void	delnode(void *content)
{
	printf("Deleting: %s\n", (char *)content);
	free(content);
}

int	main(void)
{
	char *str = ft_strdup("hello");
	// use above to use heap
	// char str[] = "hello" is on the stack
	t_list	*node;

	node = ft_lstnew(str);
	if (!node)
	{
		printf("Malloc fail");
		return (1);
	}
	printf("Content: %s\n", (char *)node->content);
	printf("Next: %p\n", (void *)node->next);

	ft_lstclear(&node, delnode);
}
*/