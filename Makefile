# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arporto- <arporto-@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 23:37:42 by arporto-          #+#    #+#              #
#    Updated: 2021/07/28 22:07:24 by arporto-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#define o compilador
CC	= gcc

#define as flags utilizadas
CFLAGS	= -Wall -Werror -Wextra

#Variável que armazena os arquivos.c
SRC	= ft_isalnum.c ft_isdigit.c

# Cria para todo arquivo .c um arquivo .o
OBJ	= $(SRC:.c=.o)

NAME	= libft.a

#$@    Nome da regra. 
#$<    Nome da primeira dependência 
#$^ 	Lista de dependências
#$? 	Lista de dependências mais recentes que a regra.
#$* 	Nome do arquivo sem sufixo

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)



all:	$(NAME)



$(NAME):	$(OBJ) libft.h
		$(CC) $(CFLAGS) -o $(NAME) 

clean:	
	rm $(OBJ)	

