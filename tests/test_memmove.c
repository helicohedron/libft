/*
#include "../libft.h"
#include <stdio.h>

int main(void)
{
    char    str[] = {'B', 'E', 'A', 'R', 'S', '\0'};
	
	ft_memmove(str + 1, str, 5);
	int	i = 0;
	while (i < 6)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");	
	
	return (0);
}

    printf("SRC address: %p\n", src);
    printf("DST address: %p\n", dest);
    // determine which comes first
    if (&src < &dest)
	{
		printf("SRC first, then DST\n");
		printf("SRC last add: %p\n", &src[6]);
		printf("DST first add: %p\n", &dest[0]);
		if (&src[6] >= &dest[0])
			printf("Overlap.\n");
		else
			printf("No overlap.\n");
	}
	else
        printf("DEST first, then SRC\n");
		int	j = 0;
		printf("\nOld dest:\n");
while (j < 6 && dest[j])
{
	printf("%c", dest[j]);
	j++;
}
printf("\n");

ft_memmove(&dest, &src, 6);

int	i = 0;
printf("\nNew dest after ft_memmove:\n");
while (i < 6)
{
	printf("%c", dest[i]);
	i++;
}
*/