/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_cursor_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:48:06 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/15 17:49:46 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

void	move_cursor_left(void)
{
	t_term	*term;

	term = ft_term();
	if (term->cmd.cursor->prev != NULL)
	{
		term->cmd.cursor = term->cmd.cursor->prev;
		ft_tputs("le"); // TODO : Verif init_term que "le" est dispo
	}
}
