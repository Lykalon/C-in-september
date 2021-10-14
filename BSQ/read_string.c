/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:57:50 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:09:21 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*read_string(char *str, int n)
{
	char	*res;
	int		fd;
	int		ret;

	fd = 0;
	ret = 0;
	res = malloc(sizeof(char) * (n));
	fd = open (str, O_RDONLY);
	ret = read (fd, res, n);
	res[ret] = '\0';
	close (fd);
	return (res);
}
