# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 13:15:20 by jmerchan          #+#    #+#              #
#    Updated: 2023/07/24 19:14:05 by jmerchan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc

SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_atoi.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strjoinfree.c \
	  ft_strtrim.c \
	  ft_putnbr_fd.c \
	  ft_putendl_fd.c \
	  ft_putstr_fd.c \
	  ft_putchar_fd.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_split.c \
	  ft_lstnew_bonus.c \
	  ft_lstadd_front_bonus.c \
	  ft_lstsize_bonus.c \
	  ft_lstlast_bonus.c \
	  ft_lstadd_back_bonus.c \
	  ft_lstdelone_bonus.c \
	  ft_lstclear_bonus.c \
	  ft_lstiter_bonus.c \
	  ft_lstmap_bonus.c \
	  ft_printf.c \
	  ft_write.c \
	  ft_itoa_c.c \
	  ft_itoa_hex.c \
	  ft_toupperstr.c \
	  get_next_line.c

OBJS = $(SRC:.c=.o)

%.o: %.c
	@$(CC)$(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) -> created! $(DEFAULT)"
	
clean: 
	@rm -f $(OBJS)
	@echo "$(YELLOW)$(NAME) -> Object files deleted. "

fclean:
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) deleted -> All files deleted. "

re:	fclean $(NAME)
	
.PHONY:
	all clean fclean re bonus

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m