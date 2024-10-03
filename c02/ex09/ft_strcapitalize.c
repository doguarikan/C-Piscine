/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 22:11:54 by darikan           #+#    #+#             */
/*   Updated: 2023/09/16 15:40:41 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((!(str[i - 1] <= '9' && str[i - 1] >= '0'))
			&& (!(str[i - 1] <= 'z' && str[i - 1] >= 'a'))
			&& (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
			&& (str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
