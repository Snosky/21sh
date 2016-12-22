/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refresh_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:19:40 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/22 15:30:49 by tpayen           ###   ########.fr       */
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
	tputs("\033[s", 0, tputc);
	tputs("\033[J", 0, tputc);
	while (cmd && cmd->content)
	{
		tputs(cmd->content, 0, tputc);
		cmd = cmd->next;
	}
	tputs("\033[u", 0, tputc);
	if (cursor_pos == CURSOR_NEXT)
		ft_tputs("nd");
	return (1);
}

/*
int		refresh_cmd(int cursor_pos)
{
	t_term	*term;
	t_lstd	*cmd;

	term = ft_term();
	cmd = term->cmd.cursor;
	if (cmd->prev)
		cmd = term->cmd.cursor->prev;
	if (cursor_pos == CURSOR_PREV)
	{
		if (cmd && cmd->next)
			cmd = cmd->next;
		ft_tputs("le");
	}
	tputs("\033[s", 0, tputc);
	tputs("\033[J", 0, tputc);
	while (cmd && cmd->content != NULL)
	{
		tputs(cmd->content, 0, tputc);
		cmd = cmd->next;
	}
	tputs("\033[u", 0, tputc);
	if (cursor_pos == CURSOR_NEXT)
		ft_tputs("nd");
	return (1);
}
*/
