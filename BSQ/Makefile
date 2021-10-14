# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snuts <snuts@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 21:55:47 by snuts             #+#    #+#              #
#    Updated: 2021/09/22 22:38:50 by snuts            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = algoritm.c box_number.c ft_alg_input.c ft_count.c ft_i.c \
		ft_j.c ft_max.c ft_parse.c ft_parse2.c main.c read_string.c \

OBJS = ${SRCS:.c=.o}

RM = rm -f

all: ${NAME}

${NAME}:${OBJS}
		gcc -Wall -Wextra -Werror ${OBJS} -o ${NAME}
		
clean:
		${RM} ${OBJS} 

fclean: clean
		${RM} ${NAME}

re:
		fclean all

.PHONY:
		all clean fclean re
