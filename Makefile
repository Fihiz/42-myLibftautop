# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: sad-aude <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/23 23:51:34 by sad-aude     #+#   ##    ##    #+#        #
#    Updated: 2019/11/30 18:50:14 by sad-aude    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_calloc.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_strdup.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strjoin.c \
			ft_substr.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_split.c \
			ft_itoa.c

BONUSSRCS	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c

OBJS	=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(BONUSSRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

HEADER	=	libft.h

all:	$(NAME)

$(NAME):	$(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus:	$(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:		clean
	rm -f $(NAME)

re: fclean all
