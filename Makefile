# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idsy <idsy@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/19 11:41:03 by idsy              #+#    #+#              #
#    Updated: 2019/05/06 11:13:55 by idsy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#FILE INFOS
NAME = libft.a
SRCS_FILES = ft_isalnum.c ft_bzero.c ft_isascii.c ft_isalpha.c ft_isdigit.c ft_isprint.c\
			ft_atoi.c ft_memchr.c ft_memalloc.c ft_memccpy.c ft_itoa.c ft_memcpy.c\
			ft_memcmp.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c\
			ft_putendl.c ft_putendl_fd.c ft_putstr.c ft_putnbr.c ft_putstr_fd.c ft_putnbr_fd.c\
			ft_strclr.c ft_strcmp.c ft_strcat.c ft_strcpy.c ft_strchr.c ft_strdel.c\
			ft_strdup.c ft_striter.c ft_strequ.c ft_striteri.c ft_strlen.c ft_strlcat.c\
			ft_strjoin.c ft_strmap.c ft_strncat.c ft_strmapi.c ft_strncmp.c ft_strncpy.c\
			ft_strnequ.c ft_strnew.c ft_strrchr.c ft_strstr.c ft_strsub.c ft_strnstr.c\
			ft_tolower.c ft_toupper.c ft_strtrim.c ft_strsplit.c ft_lstnew.c ft_lstmap.c\
			ft_lstdelone.c ft_lstdel.c ft_lstmap.c ft_lstiter.c ft_lstadd.c ft_ptrswap.c\
			ft_strjoin_free.c ft_strrealloc.c ft_atoi_base.c ft_is_bigger.c ft_is_smaller.c\
			ft_listadd.c
SRCS_PATH = src/
INCLUDES_PATH = includes/
OBJ_FILES_PATH = objs/
OBJS_FILES = $(SRCS_FILES:.c=.o)
HEADER_LIB_NAME = libft.h

#COMP INFOS
CC = gcc
FLAGS = -Wall -Wextra -Werror

#VAR
SRCS = $(addprefix $(SRCS_PATH),$(SRCS_FILES))
OBJS = $(addprefix $(OBJ_FILES_PATH),$(OBJS_FILES))
INC = $(addprefix -I,$(INCLUDES_PATH))


#RULES
all : $(NAME)

$(NAME) : $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_FILES_PATH)%.o : $(SRCS_PATH)%.c
	@mkdir -p $(OBJ_FILES_PATH)
	@$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean :
	@rm -rf $(OBJ_FILES_PATH)

fclean : clean
	@rm -rf $(NAME)

re : fclean all	

.PHONY : all re clean fclean
