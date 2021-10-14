/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:09:16 by lykalon           #+#    #+#             */
/*   Updated: 2021/09/22 22:51:06 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_set_int_string(char *str, char *key, int *array, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (str[i] == key[0])
			array[i] = 1;
		else if (str[i] == key[1])
			array[i] = 0;
		else
		{
			array[i] = -2;
			write (1, "map error\n", 10);
		}
		i++;
	}
}

void	ft_set_array(int **result, char *start, int *w, char *key)
{
	int	count;
	int	i;

	count = 0;
	while (start[count] != '\n')
		count++;
	*w = count;
	i = 0;
	while (*start != '\0')
	{
		count = 0;
		while (start[count] != '\n')
			count++;
		if (count == *w)
		{
			result[i] = (int *) malloc(sizeof(int) * (*w));
			if (result[i] == NULL)
				return ;
			ft_set_int_string(start, key, result[i], count);
		}
		else
			return ;
		i++;
		start = start + count + 1;
	}
}

int	ft_atoi(char *str, int count)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (i <= count)
	{
		if ((str[i] >= 48) && (str[i] <= 57))
		{
			res = (res * 10) + (str[i] - 48);
		}
		else
			sign = (-1);
		i++;
	}
	res = res * sign;
	return (res);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
