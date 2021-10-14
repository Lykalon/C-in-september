/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:42:03 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:12:04 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_set_key(char *key, char *first)
{
	int	i;
	int	count;

	i = 0;
	if (key == NULL)
		return ;
	count = ft_strlen(first);
	count -= 3;
	while (i < 3)
	{
		key[i] = first[count];
		i++;
		count++;
	}
	key[3] = '\0';
}

void	ft_set_first(char *str, char *first, int count, char *key)
{
	int		i;

	i = 0;
	while (i < count)
	{
		first[i] = str[i];
		i++;
	}
	i++;
	first[i] = '\0';
	ft_set_key(key, first);
}

int	**ft_parse(char	*str, char *key, int *h, int *w)
{
	char	*first;
	char	*start;
	int		count;
	int		**result;

	start = str;
	count = 0;
	while (str[count] != '\n')
		count++;
	first = (char *) malloc(sizeof(char) * (count + 1));
	if (first == NULL)
		return (NULL);
	ft_set_first(str, first, count, key);
	*h = ft_atoi(first, count - 4);
	if (*h <= 0)
		return (NULL);
	free(first);
	start = start + (count + 1);
	result = (int **)malloc(sizeof(int *) * (*h));
	if (result == NULL)
		return (NULL);
	ft_set_array(result, start, w, key);
	return (result);
}
