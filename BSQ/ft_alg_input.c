/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alg_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 03:20:56 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:08:43 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	sr(int a, int b, int c)
{
	int	result;

	if (a <= b && a <= c)
		result = a + 1;
	else if (b <= a && b <= c)
		result = b + 1;
	else
		result = c + 1;
	return (result);
}

int	**ft_alg_input(int **g, int height, int width)
{
	int	i;
	int	j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (i == 0 || j == 0 || g[i][j] == 0)
			{
				g[i][j] = g[i][j];
			}
			else
			{
				g[i][j] = sr(g[i - 1][j], g[i][j - 1], g[i - 1][j - 1]);
			}
			j++;
		}
		i++;
	}
	return (g);
}
