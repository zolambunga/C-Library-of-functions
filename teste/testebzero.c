#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	while (n)
	{
		((unsigned char *)s)[n - 1] = 0;
		n--;
	}
}

/*int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
	ft_bzero(&str[8], 10);
	printf("%s", str);
}*/
