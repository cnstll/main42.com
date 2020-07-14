/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:12:09 by calle             #+#    #+#             */
/*   Updated: 2020/07/14 16:12:11 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	printf("250 ? %d\n", ft_sqrt(62500));
	printf("10000 ? %d\n", ft_sqrt(100000000));
	printf("0 ? %d\n", ft_sqrt(2147483647));
	printf("46300 ? %d\n", ft_sqrt(2143690000));
	return (0);
}

