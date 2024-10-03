/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:27:13 by darikan           #+#    #+#             */
/*   Updated: 2023/09/03 21:27:17 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	neg_checker(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Lütfen geçerli bir sayı giriniz\n", 35);
		return ;
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	neg_checker(x, y);
	b = 1;
	while (b <= y && y > 0 && x > 0)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && x != 1 && y != 1))
				ft_putchar('o');
			else if ((a == x && b == 1) || (a == 1 && b == y))
				ft_putchar('o');
			else if ((a > 1 && a < x && b == 1) || (a > 1 && a < b && b == y))
				ft_putchar('-');
			else if ((a == 1 && b > 1 && b < y) || (a == x && b > 1 && b < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
