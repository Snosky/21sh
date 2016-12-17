/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refresh_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 17:19:40 by tpayen            #+#    #+#             */
/*   Updated: 2016/12/16 17:40:27 by tpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <21sh.h>

int		refresh_cmd(void)
{
	t_term	*term;
	t_lstd	*cmd;

	term = ft_term();
	cmd = term->cmd.cursor->prev;
	tputs("\033[s", 0, tputc);
	tputs("\033[J", 0, tputc);
	while (cmd && cmd->content != NULL)
	{
		tputs(cmd->content, 0, tputc);
		cmd = cmd->next;
	}
	if (cmd && term->cmd.cursor->content != NULL)
	{
		tputs("\033[u", 0, tputc);
		ft_tputs("nd");
	}
	return (1);
}
