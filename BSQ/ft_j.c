/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_j.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 03:37:24 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:08:58 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_j(int **g, int height, int width)
{
	int	i;
	int	j;
	int	max_j;
	int	max;

	max = 0;
	max_j = 0;
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (g[i][j] > max)
			{
				max = g[i][j];
				max_j = j;
			}	
			j++;
		}	
		i++;
	}
	return (max_j);
}
