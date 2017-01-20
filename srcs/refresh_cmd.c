/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refresh_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:19:40 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/22 15:55:39 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		refresh_cmd(int cursor_pos)
{
	t_term	*term;
	t_lstd	*cmd;

	term = ft_term();
	cmd = term->cmd.cursor->prev;
	if (cursor_pos == CURSOR_PREV || cursor_pos == CURSOR_DEF)
		cmd = term->cmd.cursor;
	if (cursor_pos == CURSOR_PREV)
		ft_tputs("le");
	tputs(SAVE_CURSOR_POS, 0, tputc);
	tputs(ERASE_DOWN, 0, tputc);
	while (cmd && cmd->content)
	{
		tputs(cmd->content, 0, tputc);
		cmd = cmd->next;
	}
	tputs(RESET_CURSOR_POS, 0, tputc);
	if (cursor_pos == CURSOR_NEXT)
		ft_tputs("nd");
	return (1);
}
