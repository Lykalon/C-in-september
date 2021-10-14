/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 03:33:56 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:08:53 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_i(int **g, int height, int width)
{
	int	i;
	int	j;
	int	max_i;
	int	max;

	max = 0;
	max_i = 0;
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (g[i][j] > max)
			{
				max = g[i][j];
				max_i = i;
			}	
			j++;
		}	
		i++;
	}
	return (max_i);
}
