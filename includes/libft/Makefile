# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 15:12:26 by mchampag          #+#    #+#              #
#    Updated: 2022/11/01 12:32:55 by mchampag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libft.a
SRCS 	=	exit_error.c free_it.c \
			ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_strnstr.c \
			get_next_line_bonus.c strncmp_rev.c
OBJS 	=	${SRCS:.c=.o}
HEADER	=	./
GNL_HEADER = get_next_line/

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

.c.o:		%.o : %.c
			@${CC} ${CFLAGS} -I ${HEADER} -c $< -o $(<:.c=.o)

$(NAME):	${OBJS}
			@ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
			@rm -f ${OBJS}

fclean: 	clean
			@rm -f $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
