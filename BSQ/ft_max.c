/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 03:39:31 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:09:03 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_max(int **g, int height, int width)
{
	int	i;
	int	j;
	int	max;

	max = 0;
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (g[i][j] > max)
			{
				max = g[i][j];
			}	
			j++;
		}	
		i++;
	}
	return (max);
}
