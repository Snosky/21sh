/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21sh.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:28:45 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/08 16:46:34 by tpayen           ###   ########.fr       */
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

typedef struct termios	t_termios;

typedef struct		s_term
{
	t_termios		term;
	t_termios		default_term;
	int			fd;
	char		*name;
}					t_term;

int		get_key_hook(void);

#endif
