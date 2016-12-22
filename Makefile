# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpayen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/07 17:42:31 by tpayen            #+#    #+#              #
#*   Updated: 2016/12/22 15:36:42 by tpayen           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

EXEC = 21sh

CC = clang
CFLAGS = -Werror -Wextra -Wall -g

INCLUDES = -Iincludes -Ilibft/includes

LIBFTDIR = libft/
LIBS = -ltermcap libft/libft.a

SRCDIR = srcs/
OBJDIR = objs/

SRC_FILES = main.c \
			ft_term.c \
			ft_error.c \
			init_hook.c \
			init_term.c \
			init_cmd.c \
			tputc.c	\
			ft_tputs.c \
			print_prompt.c \
			get_key_hook.c \
			printable_key_hook.c \
			add_key_to_cmd.c \
			refresh_cmd.c \
			move_cursor_left.c \
			move_cursor_right.c \
			cmd_delone.c \
			delete_keys.c \

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
