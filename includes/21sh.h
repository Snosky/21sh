/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21sh.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:28:45 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/22 15:36:27 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _21SH_H
# define _21SH_H

# include <libft.h>
# include <get_next_line.h>
# include <stdlib.h>
# include <fcntl.h>
# include <termios.h>
# include <term.h>
# include <sys/ioctl.h>
# include <unistd.h>

# define K_UP 4283163
# define K_DOWN 4348699
# define K_LEFT 4479771
# define K_RIGHT 4414235
# define K_ESC 27
# define K_RETURN 10
# define K_SPACE 32
# define K_DELETE 2117294875
# define K_BACKSPACE 127

# define ERR_TERM_FD "Error fd"
# define ERR_TERM_NAME "Error name"
# define ERR_TERM_CAP_DB "Error db"
# define ERR_TERM_TYPE "Error type"
# define ERR_TERM_ATTR "Error attr"
# define ERR_CMD_INIT "Error cmd init"

enum e_cursor_pos {CURSOR_NEXT, CURSOR_PREV, CURSOR_DEF};

typedef struct termios	t_termios;

typedef struct		s_cmd
{
	t_lstd			*first;
	t_lstd			*last;
	t_lstd			*cursor;
}					t_cmd;

typedef struct		s_term
{
	t_termios		term;
	t_termios		default_term;
	t_cmd			cmd;
	int				fd;
	char			*name;
}					t_term;

t_term	*ft_term(void);


int		ft_error(char *msg);

int		init_hook(void);
int		init_term(void);
int		init_cmd(void);

void	ft_tputs(char *id);
int		tputc(int c);

int		print_prompt(void);

int		get_key_hook(void);

int		printable_key_hook(int key);
int		add_key_to_cmd(int key);
int		refresh_cmd(int cursor_pos);

void	move_cursor_left(void);
void	move_cursor_right(void);

void	cmd_delone(void *content, size_t size);
void	delete_keys(int key);
#endif
