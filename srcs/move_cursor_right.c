/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_cursor_right.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:50:40 by tpayen            #+#    #+#             */
/*   Updated: 2017/01/22 02:26:49 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

void	move_cursor_right(void)
{
	t_term	*term;

	term = ft_term();
	if (term->cmd.cursor->next != NULL)
	{
		term->cmd.cursor = term->cmd.cursor->next;
		ft_tputs("nd"); // TODO : Verif init "nd" dispo
	}
}
