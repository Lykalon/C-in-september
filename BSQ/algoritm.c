/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 03:55:48 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:08:00 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	algo(int **g, int height, int width, char *key)
{
	int	i;
	int	j;
	int	**a;
	int	**b;

	a = ft_alg_input(g, height, width);
	b = box_number(a, height, width);
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (b[i][j] == 0)
				write(1, &key[1], 1);
			else if (b[i][j] == -1)
				write(1, &key[2], 1);
			else
				write(1, &key[0], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
