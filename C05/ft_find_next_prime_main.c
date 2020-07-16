#include <stdio.h>
int ft_find_next_prime(int nb);
int main()
{
	printf("2 ? %d\n", ft_find_next_prime(0));
	printf("2 ? %d\n", ft_find_next_prime(1));
	printf("2 ? %d\n", ft_find_next_prime(2));
	printf("7 ? %d\n", ft_find_next_prime(6));
	printf("2 ? %d\n", ft_find_next_prime(-13));
	printf("187009 ? %d\n", ft_find_next_prime(187004));
	printf("102561317 ? %d\n", ft_find_next_prime(102561317));
	printf("102561337 ? %d\n", ft_find_next_prime(102561318));
	printf("2025613127 ? %d\n", ft_find_next_prime(2025613127));
	printf("2025613147 ? %d\n", ft_find_next_prime(2025613128));
	return (0);
}
