#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max);
int main()
{
	int *range;

	printf("%d\n", ft_ultimate_range(&range, 10, 5));
	return 0;
}
