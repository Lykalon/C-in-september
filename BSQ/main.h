/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snuts <snuts@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:16:34 by snuts             #+#    #+#             */
/*   Updated: 2021/09/22 20:07:57 by lykalon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h> 
# define BUF_SIZE 1024

char	*read_string(char *str, int n);
int		ft_count(char *str);
void	ft_set_int_string(char *str, char *key, int *array, int count);
void	ft_set_array(int **result, char *start, int *w, char *key);
int		ft_atoi(char *str, int count);
int		ft_strlen(char *str);
void	ft_set_key(char *key, char *first);
void	ft_set_first(char *str, char *first, int count, char *key);
int		**ft_parse(char	*str, char *key, int *h, int *w);
int		ft_i(int **g, int height, int width);
int		ft_j(int **g, int height, int width);
int		ft_max(int **g, int height, int width);
int		**box_number(int **g, int height, int width);
int		**ft_alg_input(int **g, int height, int width);
void	algo(int **g, int height, int width, char *key);
int		sr(int a, int b, int c);
int		ft_count(char *str);

#endif
