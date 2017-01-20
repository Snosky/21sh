/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_keys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <tpayen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 15:32:34 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/22 15:36:50 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

void	delete_keys(int key)
{
	t_term	*term;
	t_lstd	*del;

	term = ft_term();
	if (key == K_BACKSPACE && term->cmd.cursor->prev)
	{
		del = term->cmd.cursor->prev;
		ft_lstddelone(&del, cmd_delone);
		refresh_cmd(CURSOR_PREV);
	}
	else if (key == K_DELETE && term->cmd.cursor && term->cmd.cursor->content)
	{
		del = term->cmd.cursor;
		term->cmd.cursor = term->cmd.cursor->next;
		ft_lstddelone(&del, cmd_delone);
		refresh_cmd(CURSOR_DEF);
	}
}
