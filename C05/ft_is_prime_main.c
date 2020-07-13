#include <stdio.h>
int ft_is_prime(int nb);
int main()
{
	printf("0 is prime ? %d\n", ft_is_prime(0));
	printf("1 is prime ? %d\n", ft_is_prime(1));
	printf("2 is prime ? %d\n", ft_is_prime(2));
	printf("3 is prime ? %d\n", ft_is_prime(3));
	printf("5 is prime ? %d\n", ft_is_prime(5));
	printf("-13 is prime ? %d\n", ft_is_prime(-13));
	printf("187003 is prime ? %d\n", ft_is_prime(187003));
	printf("102561317 is prime ? %d\n", ft_is_prime(102561317));
	printf("102561318 is prime ? %d\n", ft_is_prime(102561318));
	printf("2025613127 is prime ? %d\n", ft_is_prime(2025613127));
	printf("2025613128 is prime ? %d\n", ft_is_prime(2025613128));
	return (0);
}
