/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 03:45:27 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:08:05 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	**box_number(int **g, int height, int width)
{
	int	i;
	int	j;
	int	max_i;
	int	max_j;
	int	max;

	max_i = ft_i(g, height, width);
	max_j = ft_j(g, height, width);
	max = ft_max(g, height, width);
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (((i > max_i - max) && (j > max_j - max))
				&& ((i <= max_i) && (j <= max_j)))
				g[i][j] = -1;
			else
				g[i][j] = g[i][j];
			j++;
		}
		i++;
	}
	return (g);
}
