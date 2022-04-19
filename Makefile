# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeyou <jeyou@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 12:58:02 by jeyou             #+#    #+#              #
#    Updated: 2022/04/19 19:36:16 by jeyou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRCS = ft_islower.c ft_isupper.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strtrim.c \
		ft_striteri.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strdup.c \
		ft_calloc.c ft_strjoin.c ft_split.c ft_substr.c ft_itoa.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
LIB = ./
NAME = libft.a
SRCS_B = ft_lstnew.c \
	  		ft_lstadd_front.c \
	  		ft_lstsize.c \
	  		ft_lstlast.c \
	  		ft_lstadd_back.c \
	  		ft_lstdelone.c \
	  		ft_lstclear.c \
	  		ft_lstiter.c \
	  		ft_lstmap.c

OBJS_B = $(SRCS_B:.c=.o)

ifdef BONUS
	OBJS_ALL = $(OBJS) $(OBJS_B)
else
	OBJS_ALL = $(OBJS) 
endif


all : $(NAME)

$(NAME) : $(OBJS_ALL)
	ar crs $@ $^

bonus : 
	make BONUS=1 all

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $^ -I $(LIB)

clean :
	rm -rf $(OBJS) $(OBJS_B)


fclean : clean
	rm -rf $(NAME)

re : fclean all


.PHONY : all clean fclean re 
