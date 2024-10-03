/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:12:42 by darikan           #+#    #+#             */
/*   Updated: 2023/09/03 21:13:29 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c );

void	neg_checker(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "Lütfen geçerli bir sayı giriniz\n", 35);
		return ;
	}
}

void	rush(int x, int y)
{
	int		a;
	int		b;

	neg_checker(x, y);
	b = 1;
	while (b <= y && y > 0 && x > 0)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == 1 && b == y))
				ft_putchar ('A');
			else if ((a == x && b == 1) || (a == x && b == y))
				ft_putchar ('C');
			else if ((a > 1 && a < x && b == 1) || (a > 1 && a < x && b == y))
				ft_putchar ('B');
			else if ((b > 1 && b < y && a == 1) || (b > 1 && b < y && a == x))
				ft_putchar ('B');
			else
				ft_putchar (' ');
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
