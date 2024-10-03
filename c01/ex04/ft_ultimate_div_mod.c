/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:57:47 by darikan           #+#    #+#             */
/*   Updated: 2023/09/07 14:03:56 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpa;
	int	tmpb;

	if (b != 0)
	{
		tmpa = *a;
		tmpb = *b;
		*a = tmpa / tmpb;
		*b = tmpa % tmpb;
	}
}
