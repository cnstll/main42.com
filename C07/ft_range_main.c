/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:42:47 by calle             #+#    #+#             */
/*   Updated: 2020/07/14 13:42:50 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max);

void ft_print_table(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int main ()
{
	int min = -5;
	int max = 5;
	int size = max - min;
	ft_print_table(ft_range(min, max), size);
	free(ft_range(min, max));
	return (0);
}
