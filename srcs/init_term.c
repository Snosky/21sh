/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_term.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 00:32:37 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/19 02:53:23 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		init_term(void)
{
	t_term	*term;
	int		success;

	term = ft_term();
	if ((term->fd = open(ttyname(STDIN_FILENO), O_WRONLY)) == -1)
		ft_error(ERR_TERM_FD);
	term->name = getenv("TERM");
	if (term->name == NULL)
		ft_error(ERR_TERM_NAME);
	success = tgetent(0, term->name);
	if (success < 0)
		ft_error(ERR_TERM_CAP_DB);
	else if (success == 0)
		ft_error(ERR_TERM_TYPE);
	if (tcgetattr(0, &(term->term)) == -1 || tcgetattr(0, &(term->default_term)) == -1)
		ft_error(ERR_TERM_ATTR);
	term->term.c_lflag &= ~(ICANON | ECHO);
	//term->term.c_oflag &= OPOST;
	term->term.c_cc[VMIN] = 1;
	term->term.c_cc[VTIME] = 0;
	tcsetattr(0, TCSADRAIN, &(term->term));
	return (1);
}
