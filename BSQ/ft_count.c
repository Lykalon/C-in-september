/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:15:52 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 19:33:25 by snuts            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_count(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		count;

	count = 0;
	fd = 0;
	ret = -1;
	fd = open(str, O_RDONLY);
	while (ret != 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		count += ret;
	}
	close(fd);
	return (count);
}
