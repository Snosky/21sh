/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21sh.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:28:45 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/07 17:52:47 by tpayen           ###   ########.fr       */
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

typedef struct termios	t_termios;

typedef struct		s_term
{
	t_termios		term;
	t_termios		default_term;
	int			fd;
	char		*name;
}					t_term;

#endif
