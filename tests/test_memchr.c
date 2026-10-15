/*
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[] = {'a', 'b', 'c', 'd', '\0'};
	int	c = 99;
	
	printf("Address of c: %p\n", &(str[2]));
	printf("Output from function: %p\n", 
		(void*)(ft_memchr(str, c, 5)));
	printf("Output from function with size 2: %p\n", 
		(void*)(ft_memchr(str, c, 2)));
	
    printf("\nAddress of x: NULL\n");
	printf("Output from function: %p\n", (void*)(ft_memchr(str, 'x', 5)));
}
*/
