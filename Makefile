# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpayen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/07 17:42:31 by tpayen            #+#    #+#              #
#    Updated: 2016/12/07 17:47:14 by tpayen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = 21sh

CC = clang
CFLAGS = -Werror -Wextra -Wall

INCLUDES = -Iincludes -Ilibft/includes

LIBFTDIR = libft/
LIBS = -ltermcap libft/libft.a

SRCDIR = srcs/
OBJDIR = objs/

SRC_FILES = main.c \

DIRS = $(OBJDIR)

OBJS = $(SRC_FILES:%.c=$(OBJDIR)%.o)

all: directories $(EXEC)

$(EXEC): $(OBJS)
	@($(MAKE) -C $(LIBFTDIR))
	$(CC) -o $@ $^ $(LIBS)

$(OBJDIR)%.o: $(SRCDIR)%.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES)

.PHONY: directories re clean fclean

re: fclean all

clean:
	rm -rf $(DIRS)
	@($(MAKE) -C $(LIBFTDIR) $@)

fclean: clean
	rm -rf $(EXEC)
	@($(MAKE) -C $(LIBFTDIR) $@)

directories: $(DIRS)

$(DIRS):
	mkdir $@
