/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darikan <darikan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:28:47 by darikan           #+#    #+#             */
/*   Updated: 2023/09/19 02:31:06 by darikan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[k] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		k = 0;
		while ((str[i + k] == to_find[k]) && (str[k + i]))
		{
			if (to_find[k + 1] == '\0')
			{
				return (str + i);
			}
			k++;
		}
		i++;
	}
	return (0);
}
