/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lykalon <lykalon@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:53:45 by lykalon           #+#    #+#             */
/*   Updated: 2021/09/08 22:56:18 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	putstr(int *result, int count)
{
	char	c;
	int		i;

	i = 0;
	while (result[i] != 11)
	{
		c = result[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	count = count + 1;
	return (count);
}

int	check(int i, int j, int *result)
{
	int	k;
	int	l;
	int	x;

	k = 0;
	l = j;
	while (k < i)
	{
		if (result[k] == j)
			return (0);
		k++;
	}
	x = 0;
	while (x < i)
	{
		k = x;
		l = result[x];
		if ((x - i) == (j - l) || (x - i) == (l - j))
			return (0);
		x++;
	}
	return (1);
}

int	queens(int i, int count, int *result)
{
	int	j;

	j = 0;
	while (j < 10)
	{
		if (check(i, j, result) == 1)
		{
			result[i] = j;
			if (i == 9)
			{
				if (check(i, j, result) == 1)
				{
					count = putstr(result, count);
				}
				return (count);
			}
			else
				count = queens(i + 1, count, result);
		}
		result[i] = 0;
		j++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	count;
	int	i;
	int	result[11];

	result[10] = 11;
	count = 0;
	i = 0;
	count = queens(i, count, result);
	return (count);
}
