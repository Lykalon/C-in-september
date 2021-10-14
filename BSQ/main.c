/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:07:47 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 22:52:31 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	char	*result;
	char	key[4];
	int		i;
	int		**arr;
	int		h_w[2];

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			result = read_string(argv[i], ft_count(argv[i]));
			arr = ft_parse(result, key, &h_w[0], &h_w[1]);
			algo(arr, h_w[0], h_w[1], key);
			free(result);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
