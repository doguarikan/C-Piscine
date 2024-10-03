/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:55:52 by darikan           #+#    #+#             */
/*   Updated: 2023/09/07 13:42:58 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	charprint(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			charprint((a / 10) + 48);
			charprint((a % 10) + 48);
			charprint(' ');
			charprint((b / 10) + 48);
			charprint((b % 10) + 48);
			if (a == 98 && b == 99)
			{
			}
			else
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
