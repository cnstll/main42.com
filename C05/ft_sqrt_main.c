#include <stdio.h>
int ft_sqrt(int nb);
int main(void)
{
	printf("0 ? %d\n", ft_sqrt(0));
	printf("1 ? %d\n", ft_sqrt(1));
	printf("2 ? %d\n", ft_sqrt(4));
	printf("0 ? %d\n", ft_sqrt(3));
	printf("10 ? %d\n", ft_sqrt(100));
	printf("0 ? %d\n", ft_sqrt(-13));
	printf("10000 ? %d\n", ft_sqrt(100000000));
	return (0);
}


