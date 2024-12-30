# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 14:03:03 by fimazouz          #+#    #+#              #
#    Updated: 2024/05/28 13:32:59 by fimazouz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJS = ${SRCS:.c=.o}
NAME = push_swap
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS = a_to_b.c b_to_a.c errors.c \
       ft_isdigit.c ft_split.c init_stack.c push.c \
       reverserot.c rotate.c sort_stacks.c \
       sort_three.c swap.c utils.c push_swap.c sort_stacks1.c \
	   ft_base.c ft_char.c ft_printf.c ft_str.c ft_strlen.c
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re