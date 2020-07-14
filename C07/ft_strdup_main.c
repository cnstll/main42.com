#include <stdio.h>
#include <stdlib.h>
char *ft_strdup(char *src);
int		ft_strlen(char *str);

int		ft_contains_nul(char *str)
{
	int i;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	char src1[] = "I am a Banana";
	char src2[] = "";

	printf("%s\n", ft_strdup(src1));
	printf("%s\n", ft_strdup(src2));


	printf("Len src created ? %d\n", ft_strlen(src1));
	printf("Len str created ? %d\n", ft_strlen(ft_strdup(src1)));
	printf("Str created contains nul char ? %d\n", ft_contains_nul(ft_strdup(src1)));
	free(ft_strdup(src1));
	free(ft_strdup(src2));
	return(0);
}
